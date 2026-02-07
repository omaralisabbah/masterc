Building a Snake game in C is a classic project for understanding logic, arrays, and real-time input handling. Since standard C doesn't have a built-in graphics library, we use the **Console (Terminal)** to render the game.

### How the Logic Works

The game operates on a continuous loop that follows these steps:

1. **Setup:** Initialize the snake position, fruit position, and score.
2. **Draw:** Clear the screen and print the boundaries, snake, and fruit.
3. **Input:** Check if the user pressed a key (W, A, S, D) without pausing the game.
4. **Logic:** Move the snake, check for collisions (walls or itself), and "eat" the fruit to grow.
5. **Sleep:** Add a small delay to control the game speed.

---

### The Code (Windows-based)

This version uses `<conio.h>` for real-time input (non-blocking) and `windows.h` for the `Sleep()` function.

```c
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int width = 20, height = 20;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN};
enum eDirecton dir;
int gameOver;

void Setup() {
    gameOver = 0;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw() {
    system("cls"); // Clear the console
    for (int i = 0; i < width + 2; i++) printf("#");
    printf("\n");

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) printf("#"); // Left wall
            
            if (i == y && j == x) printf("O"); // Snake head
            else if (i == fruitY && j == fruitX) printf("F"); // Fruit
            else {
                int print = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o"); // Snake tail
                        print = 1;
                    }
                }
                if (!print) printf(" ");
            }

            if (j == width - 1) printf("#"); // Right wall
        }
        printf("\n");
    }

    for (int i = 0; i < width + 2; i++) printf("#");
    printf("\nScore: %d\n", score);
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a': dir = LEFT; break;
            case 'd': dir = RIGHT; break;
            case 'w': dir = UP; break;
            case 's': dir = DOWN; break;
            case 'x': gameOver = 1; break;
        }
    }
}

void Logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
        case LEFT: x--; break;
        case RIGHT: x++; break;
        case UP: y--; break;
        case DOWN: y++; break;
        default: break;
    }

    // Hit walls
    if (x >= width || x < 0 || y >= height || y < 0) gameOver = 1;

    // Hit self
    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y) gameOver = 1;

    // Eat fruit
    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(50); // Control game speed
    }
    return 0;
}

```

---

### Key Components Explained

| Function | Purpose |
| --- | --- |
| **`_kbhit()`** | A function from `conio.h` that checks if a keyboard key has been pressed without pausing the program. |
| **`system("cls")`** | Clears the terminal screen so the next "frame" can be drawn. |
| **Tail Logic** | We use two arrays (`tailX` and `tailY`) to store the coordinates of each segment. Every time the snake moves, each segment follows the one in front of it. |
| **`rand() % width`** | Randomly places the fruit within the grid boundaries. |

### Limitations & Improvements

* **Flickering:** Because `system("cls")` is slow, the screen might flicker. In professional games, you would use a "double buffer" or update only specific characters using the Windows API.
* **Difficulty:** You can increase the `Sleep()` value to make it easier or decrease it to make it faster.

Would you like me to explain how to modify this code so the snake can "wrap around" the walls instead of dying?

---


To allow the snake to wrap around the walls (like in the classic Nokia version), we need to modify the collision logic. Instead of ending the game when the coordinates exceed the width or height, we reset them to the opposite side.

### The Wrap-Around Logic

Think of the game board as a loop. If the snake's  coordinate becomes less than 0, it should appear at `width - 1`. If it equals `width`, it should reset to 0.

---

### Updated `Logic()` Function

Replace the "Hit walls" section in your previous code with this logic:

```c
void Logic() {
    // ... (keep the tail movement code the same)

    switch (dir) {
        case LEFT:  x--; break;
        case RIGHT: x++; break;
        case UP:    y--; break;
        case DOWN:  y++; break;
        default: break;
    }

    // --- NEW WRAP-AROUND LOGIC ---
    if (x >= width) x = 0; 
    else if (x < 0) x = width - 1;
    
    if (y >= height) y = 0; 
    else if (y < 0) y = height - 1;
    // -----------------------------

    // Hit self (still ends the game)
    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y) {
            gameOver = 1;
        }
    }

    // Eat fruit
    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}

```

### How it works mathematically

If you want to make the code even more concise, you can use the **modulo operator** () to handle the wrap-around. For example:



This ensures that any value outside the range  automatically wraps back into the valid range.

---

### Improving the Experience

Now that the game is "endless" regarding walls, you might want to add a bit more challenge:

1. **Increase Speed:** Decrease the `Sleep()` time every time the score increases.
2. **Obstacles:** Add static `#` blocks inside the map that the snake must avoid.
3. **High Score:** Save the best score to a `.txt` file so you can try to beat it later.

Would you like me to show you how to add a simple "High Score" system using file handling in C?

---


Adding a high score system involves **File I/O** (Input/Output). We will store the high score in a simple text file named `highscore.txt`. When the game starts, it reads the value; when the game ends, it checks if the current score is higher and updates the file if necessary.

### 1. The High Score Logic

You will need to add a new variable `highScore` and two functions: one to load the score at the start and one to save it at the end.

### 2. Implementation

Add these functions to your code and call them in `main()`.

```c
int highScore = 0;

void LoadHighScore() {
    FILE *file = fopen("highscore.txt", "r");
    if (file == NULL) {
        highScore = 0; // If file doesn't exist, start at 0
    } else {
        fscanf(file, "%d", &highScore);
        fclose(file);
    }
}

void SaveHighScore() {
    if (score > highScore) {
        FILE *file = fopen("highscore.txt", "w");
        if (file != NULL) {
            fprintf(file, "%d", score);
            fclose(file);
        }
    }
}

```

---

### 3. Updating the Main Loop

Update your `main()` function to include these calls and display the high score on the screen.

```c
int main() {
    LoadHighScore(); // Load at startup
    Setup();
    
    while (!gameOver) {
        Draw();
        // Add this inside Draw() or here:
        printf("High Score: %d\n", highScore);
        
        Input();
        Logic();
        Sleep(50);
    }

    SaveHighScore(); // Save when game ends
    printf("\nGAME OVER!\nYour Final Score: %d", score);
    if (score > highScore) printf("\nNEW HIGH SCORE!");
    
    return 0;
}

```

---

### Why use File Handling?

* **Persistence:** Without this, your high score vanishes every time you close the console.
* **Data Integrity:** It teaches you how to handle external files, which is essential for saving game states, user profiles, or configuration settings in larger C projects.

### A Quick Tip for "Flicker-Free" Graphics

The `system("cls")` command is the main reason the game flickers. In C, you can use a Windows-specific trick to move the cursor back to the top-left (0,0) instead of clearing the whole screen. This makes the animation much smoother.

Would you like the snippet to replace `system("cls")` with a smoother cursor-reset function?

---


To make the game flicker-free, we use the `SetConsoleCursorPosition` function from the Windows API. Instead of deleting everything and redrawing it (which causes that blinking effect), this function simply tells the computer to start printing from the top-left corner again, overwriting the old characters instantly.

### The "Smooth" Cursor Function

Add this function to the top of your code, and replace `system("cls")` in your `Draw()` function with a call to `SetCursorHome()`.

```c
void SetCursorHome() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = { 0, 0 };
    SetConsoleCursorPosition(hOut, coord);
}

```

---

### Putting it all together

Here is a refined version of your `Draw()` function using the new cursor logic and the High Score display:

```c
void Draw() {
    SetCursorHome(); // Moves cursor to (0,0) instead of clearing screen

    for (int i = 0; i < width + 2; i++) printf("#");
    printf("\n");

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) printf("#");

            if (i == y && j == x) 
                printf("O"); // Head
            else if (i == fruitY && j == fruitX) 
                printf("F"); // Fruit
            else {
                int isTail = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o"); // Tail
                        isTail = 1;
                        break;
                    }
                }
                if (!isTail) printf(" ");
            }

            if (j == width - 1) printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < width + 2; i++) printf("#");
    printf("\nScore: %d  |  High Score: %d\n", score, highScore);
}

```

### Pro-Tips for Final Polish

* **Hide the Cursor:** The blinking underscore cursor can be distracting. You can hide it using the Windows console settings so only the snake is visible.
* **Colors:** You can use `SetConsoleTextAttribute` to make the snake green and the fruit red.
* **Speed Scaling:** Inside your `Logic()` function, you could do something like `int speed = 100 - (score / 2);` and use `Sleep(speed);` to make the game get harder as you eat more fruit.

Would you like to see how to add **colors** to the snake and fruit to make it look like a real arcade game?

---

To add colors in a Windows console, we use `SetConsoleTextAttribute`. This function requires a "handle" to the console and a color code.

### 1. The Color Helper Function

Add this function to the top of your code. It makes switching colors much cleaner than writing the API call every time.

```c
void SetColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

```

### 2. Common Color Codes

Here are the standard codes you can use:

* **10:** Light Green (Snake)
* **12:** Light Red (Fruit)
* **14:** Yellow (Score/Walls)
* **15:** Bright White (Default)

---

### 3. Updating the `Draw()` Function

We will now wrap our `printf` statements with `SetColor()` calls to differentiate the game elements.

```c
void Draw() {
    SetCursorHome();

    SetColor(14); // Yellow Walls
    for (int i = 0; i < width + 2; i++) printf("#");
    printf("\n");

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) { SetColor(14); printf("#"); }

            if (i == y && j == x) {
                SetColor(10); // Green Head
                printf("O");
            } else if (i == fruitY && j == fruitX) {
                SetColor(12); // Red Fruit
                printf("F");
            } else {
                int isTail = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        SetColor(2); // Dark Green Tail
                        printf("o");
                        isTail = 1;
                        break;
                    }
                }
                if (!isTail) printf(" ");
            }

            if (j == width - 1) { SetColor(14); printf("#"); }
        }
        printf("\n");
    }

    SetColor(14); // Yellow Walls
    for (int i = 0; i < width + 2; i++) printf("#");
    
    SetColor(15); // White Text
    printf("\nScore: %d  |  High Score: %d\n", score, highScore);
}

```

### 4. Final Touch: Hiding the Cursor

The blinking cursor can ruin the look of your colored game. Add this to your `main()` or `Setup()` function to hide it completely:

```c
void HideCursor() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

```

### What's Next?

You now have a fully functional, flicker-free, wrap-around Snake game with colors and a high score system!

Would you like me to help you package all these snippets into one **final, complete source file** that you can copy and compile immediately?
-
---
Here is the complete, consolidated source code. This version includes the **wrap-around logic**, **flicker-free rendering**, **color system**, **high score saving**, and **cursor hiding**.

### Complete Snake Game (C)

```c
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

// Game Settings
int width = 25, height = 20;
int x, y, fruitX, fruitY, score, highScore;
int tailX[100], tailY[100];
int nTail;
enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirecton dir;
int gameOver;

// --- Windows Console Helpers ---

void SetCursorHome() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = { 0, 0 };
    SetConsoleCursorPosition(hOut, coord);
}

void SetColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void HideCursor() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

// --- Data Management ---

void LoadHighScore() {
    FILE *file = fopen("highscore.txt", "r");
    if (file == NULL) highScore = 0;
    else {
        fscanf(file, "%d", &highScore);
        fclose(file);
    }
}

void SaveHighScore() {
    if (score > highScore) {
        FILE *file = fopen("highscore.txt", "w");
        if (file != NULL) {
            fprintf(file, "%d", score);
            fclose(file);
        }
    }
}

// --- Game Logic ---

void Setup() {
    gameOver = 0;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
    nTail = 0;
    LoadHighScore();
    HideCursor();
}

void Draw() {
    SetCursorHome();

    SetColor(14); // Yellow Walls
    for (int i = 0; i < width + 2; i++) printf("#");
    printf("\n");

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) { SetColor(14); printf("#"); }

            if (i == y && j == x) {
                SetColor(10); // Green Head
                printf("O");
            } else if (i == fruitY && j == fruitX) {
                SetColor(12); // Red Fruit
                printf("F");
            } else {
                int isTail = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        SetColor(2); // Darker Green Tail
                        printf("o");
                        isTail = 1;
                        break;
                    }
                }
                if (!isTail) printf(" ");
            }

            if (j == width - 1) { SetColor(14); printf("#"); }
        }
        printf("\n");
    }

    SetColor(14);
    for (int i = 0; i < width + 2; i++) printf("#");
    
    SetColor(15); // White Text
    printf("\nScore: %d  |  High Score: %d       \n", score, highScore);
    printf("Controls: W, A, S, D | Exit: X\n");
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a': if(dir != RIGHT) dir = LEFT; break;
            case 'd': if(dir != LEFT) dir = RIGHT; break;
            case 'w': if(dir != DOWN) dir = UP; break;
            case 's': if(dir != UP) dir = DOWN; break;
            case 'x': gameOver = 1; break;
        }
    }
}

void Logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
        case LEFT:  x--; break;
        case RIGHT: x++; break;
        case UP:    y--; break;
        case DOWN:  y++; break;
        default: break;
    }

    // Wrap-Around Logic
    if (x >= width) x = 0; else if (x < 0) x = width - 1;
    if (y >= height) y = 0; else if (y < 0) y = height - 1;

    // Self-Collision
    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y) gameOver = 1;

    // Eat Fruit
    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(40); // Fast but playable
    }
    
    SaveHighScore();
    SetColor(15);
    system("cls");
    printf("\n   GAME OVER\n");
    printf("   Final Score: %d\n", score);
    if (score > highScore) printf("   CONGRATS! NEW HIGH SCORE!\n");
    printf("\n   Press any key to exit...");
    _getch();
    
    return 0;
}

```

---

### Instructions to Run

1. **Compiler:** Use a Windows compiler like **MinGW** (via VS Code, Code::Blocks, or Dev-C++).
2. **Platform:** This code is specific to Windows because of `<windows.h>` and `<conio.h>`.
3. **Compilation:** If using the command line, run: `gcc snake.c -o snake.exe`.

### Key Features Summary

* **Colors:** Yellow borders, Red fruit, and Green snake.
* **Wrap-around:** The snake passes through walls and appears on the other side.
* **Save System:** It automatically creates `highscore.txt` in the same folder.
* **Performance:** Uses `SetConsoleCursorPosition` to prevent the screen from blinking.

Would you like to know how to add "Special Fruits" that give double points or extra length?
