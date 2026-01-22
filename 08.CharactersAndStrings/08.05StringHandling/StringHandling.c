/*
    08 Characters And Strings: 05 String Handling
    
    The **String Handling Library** (`<string.h>`) is one of the most fundamental libraries in C.
    Since C does not have a native "String" data type (it uses null-terminated arrays of characters),
    this library provides the essential tools to manipulate, search, and manage those memory blocks.

    To help you see the "big picture," we can categorize these functions based on what they actually do to the memory.

    ---

    1. Copying Functions

    These functions move data from one location to another.

    * `strcpy(dest, src)`: Copies a string. **(Dangerous if dest is too small)**.
    * `strncpy(dest, src, n)`: Safer copy; copies up to  characters.
    * `memcpy(dest, src, n)`: Copies  bytes of raw memory.
    * `memmove(dest, src, n)`: Safer version of `memcpy` that handles overlapping regions.

    2. Concatenation Functions

    These are used to "glue" strings together.

    * `strcat(dest, src)`: Appends `src` to the end of `dest`.
    * `strncat(dest, src, n)`: Appends up to  characters to the end of `dest`.

    3. Comparison Functions

    These determine the lexicographical (dictionary) order or equality of strings.

    * `strcmp(s1, s2)`: Compares two strings. Returns  if identical.
    * `strncmp(s1, s2, n)`: Compares the first  characters.
    * `memcmp(s1, s2, n)`: Compares  bytes of raw memory.

    ---

    4. Search Functions

    Used to find specific characters or patterns within a string.

    * `strchr(s, c)`: Finds the **first** occurrence of character `c`.
    * `strrchr(s, c)`: Finds the **last** occurrence of character `c`.
    * `strstr(haystack, needle)`: Finds the first occurrence of a **substring**.
    * `strpbrk(s1, s2)`: Finds the first character in `s1` that matches **any** character in `s2`.

    ## 5. Tokenization and Analysis

    Used for parsing and measuring strings.

    * `strlen(s)`: Returns the length of the string (excluding `\0`).
    * `strtok(s, delim)`: Breaks a string into "tokens" (pieces) based on delimiters.
    * `strspn(s1, s2)`: Length of the initial segment consisting only of characters in `s2`.
    * `strcspn(s1, s2)`: Length of the initial segment consisting of characters **not** in `s2`.

    ---

    Summary Table: Quick Reference

    | Function | Primary Purpose | Key Detail |
    | --- | --- | --- |
    | **`strlen`** | Length | Does not count the null terminator `\0`. |
    | **`strcpy`** | Copying | Destination must be large enough. |
    | **`strcat`** | Joining | Overwrites the original `\0` of the destination. |
    | **`strcmp`** | Comparing | Returns  for equal,  or  for different. |
    | **`strtok`** | Splitting | **Warning:** Modifies the original string. |
    | **`memset`** | Filling | Sets a block of memory to a specific byte value. |

    ---

    ### Why the "n" versions matter

    In modern C programming, functions like `strcpy` and `strcat` are often discouraged in favor of `strncpy` and `strncat`.
    This is because the "n" versions require you to specify a maximum size, preventing **Buffer Overflows**,
    which are a primary source of security vulnerabilities and crashes.

*/

/*
    08 Characters And Strings: Master String Handling Reference
    
    This program demonstrates the core functionality of the <string.h> library,
    including copying, concatenation, comparison, searching, and memory manipulation.
*/

#include <stdio.h>
#include <string.h>

int main() {
    printf("--- C String Handling Library Master Reference ---\n\n");

    // 1. MEASURING: strlen
    char message[] = "C Programming";
    printf("[strlen]  Length of '%s': %zu\n", message, strlen(message));

    // 2. COPYING: strcpy & strncpy
    char buffer1[20];
    char buffer2[10];
    strcpy(buffer1, "Hello");         // Standard copy
    strncpy(buffer2, "LongString", 9); // Safer copy (limited to 9 + null)
    buffer2[9] = '\0';                // Manual termination for safety
    printf("[strcpy]  Buffer 1: %s\n", buffer1);
    printf("[strncpy] Buffer 2: %s\n", buffer2);

    // 3. CONCATENATION: strcat
    char greet[30] = "Hello ";
    strcat(greet, "World!");
    printf("[strcat]  Joined: %s\n", greet);

    // 4. COMPARISON: strcmp & strncmp
    char s1[] = "Apple";
    char s2[] = "Apply";
    printf("[strcmp]  Comparing 'Apple' & 'Apply': %d\n", strcmp(s1, s2)); // Negative because 'e' < 'y'
    printf("[strncmp] Comparing first 3 chars: %d\n", strncmp(s1, s2, 3)); // 0 because "App" == "App"

    // 5. SEARCHING: strchr & strstr
    char *ptrChar = strchr(message, 'P');
    char *ptrSub = strstr(message, "gram");
    if(ptrChar) printf("[strchr]  Found 'P' at: %s\n", ptrChar);
    if(ptrSub)  printf("[strstr]  Found 'gram' at: %s\n", ptrSub);

    // 6. TOKENIZING: strtok
    char data[] = "Red,Green,Blue";
    printf("[strtok]  Splitting '%s':\n", data);
    char *token = strtok(data, ",");
    while (token != NULL) {
        printf("          Token: %s\n", token);
        token = strtok(NULL, ",");
    }

    // 7. MEMORY: memset & memmove
    char memBlock[10] = "ABCDEFGHI";
    memset(memBlock, '*', 3); // Fill first 3 with asterisks
    printf("[memset]  Memory: %s\n", memBlock);

    return 0;
}
