/*
    1. The Concept: What is a "Stream"?

    In C, you don't interact with hardware directly. Instead, the language uses Streams—a logical interface to the physical devices.
    A stream is a continuous "flow" of bytes.

    Input Stream: A sequence of bytes moving from an external source (like a keyboard) into your program's variables in Main Memory.
    Output Stream: A sequence of bytes moving from Main Memory to an external destination (like a monitor or a file).

    The beauty of streams is Device Independence: your code doesn't care if it's reading from a keyboard,
    a hard drive, or a satellite—the C functions used to read them remain the same.

    2. The Three Standard Streams

    Every C program automatically opens three "ready-to-use" streams when it starts. These are defined in <stdio.h>.

    Stream	            C Pointer	        Default         Device	        Purpose
    Standard Input	    stdin	            Keyboard	    Reading user data.
    Standard Output	    stdout              Screen	        Displaying normal program results.
    Standard Error	    stderr	            Screen	        Displaying error messages or diagnostics.


    Why are stdout and stderr separate if they both go to the screen?

    This is for Redirection. You can tell the Operating System to send stdout to a file (to save results)
    while allowing stderr to still print to the screen (so the user sees errors immediately).


    3. Buffering: The Waiting Room

    I/O operations are very slow compared to the CPU. To speed things up, C uses Buffers (temporary storage areas in memory).

        Line Buffered (stdout): Data is sent to the screen only when a newline character \n is encountered or the buffer is full.

        Unbuffered (stderr): Data is sent to the device immediately. This is critical for error messages so that if the program crashes, the error isn't "stuck" in a buffer.

        Fully Buffered (Files): Data is only sent when the buffer is completely full.


    4. The Toolset: Common Stream Functions

    A. Formatted I/O

    These functions allow you to read/write specific data types like integers or strings.

        printf(...) / fprintf(stdout, ...) : Write to standard output.

        scanf(...) / fscanf(stdin, ...) : Read from standard input.

        fprintf(stderr, ...) : Specifically for error reporting.


    B. Character and String I/O

        getchar() / fgetc(stdin) : Reads one character.

        putchar() / fputc(c, stdout) : Writes one character.

        fgets(buffer, size, stdin) : Reads an entire line safely.
*/




#include <stdio.h>

int main() {
    int age;

    // Using stdout to ask a question
    fprintf(stdout, "Enter your age: ");

    // Using stdin to get input
    // fscanf returns the number of items successfully read
    if (fscanf(stdin, "%d", &age) != 1) {
        // If the user enters text instead of a number, we use stderr
        fprintf(stderr, "Error: Invalid input! Please enter a number.\n");
        return 1; 
    }

    // Using stdout for the final result
    fprintf(stdout, "You are %d years old.\n", age);

    return 0;
}