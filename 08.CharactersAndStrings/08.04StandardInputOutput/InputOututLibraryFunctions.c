/*
    08 Characters And Strings: 04 Standard I/O Library Functions

    This set of functions from <stdio.h> provides the essential tools for 
    handling character and string input/output, as well as data formatting.

    Function Descriptions

    1. getchar: 
       Reads the next available character from the standard input (stdin).
       It returns the character as an unsigned char cast to an int, or EOF on failure.

    2. putchar: 
       Writes a single character to the standard output (stdout).
       It is the character-level equivalent of printf.

    3. fgets: 
       Reads a string from a stream until a newline is found or (size - 1) 
       characters are read. It automatically appends a null terminator (\0).

    4. puts:
       Writes a string to the output screen followed by a newline character. 
       It is faster and simpler than printf for plain text.

    5. sprintf: 
       Formats and stores a series of characters and values into a string buffer.
       It behaves like printf but redirects output to a memory array.

    6. sscanf: 
       Reads data from a string and stores them into variables based on format 
       specifiers. It is the "string" version of scanf.

    How It Works
    Function    Input Source        Output Target       Key Feature
    getchar     Keyboard (stdin)    Variable (int)      Character-by-character
    putchar     Variable (int)      Screen (stdout)     Single char output
    fgets       Keyboard (stdin)    String Buffer       Prevents Buffer Overflow
    puts        String Buffer       Screen (stdout)     Adds automatic '\n'
    sprintf     Variables           String Buffer       Creates formatted strings
    sscanf      String Buffer       Variables           Parses data from strings
*/



#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("08 Characters And Strings: 04 Standard I/O Library \n");
    printf("-------------------------------------------------------- \n");

    // 1 & 2. getchar and putchar 
    printf("Enter a character: ");
    int c = getchar();
    printf("Character received: ");
    putchar(c);
    putchar('\n');

    // Clear input buffer (standard practice after getchar)
    while (getchar() != '\n'); 

    // 3. fgets (Safe String Input)
    char inputBuffer[100];
    printf("\nEnter your city and zip code (e.g., Cairo 12345): ");
    fgets(inputBuffer, sizeof(inputBuffer), stdin);

    // 4. puts (Simple Output)
    puts("\nProcessing the following input via puts:");
    puts(inputBuffer);

    // 5. sscanf (Data Extraction)
    char city[50];
    int zip;
    if (sscanf(inputBuffer, "%s %d", city, &zip) == 2) {
        // 6. sprintf (Data Assembly)
        char finalMessage[150];
        sprintf(finalMessage, "Location Verified: %s (Postal Code: %d)", city, zip);
        puts(finalMessage);
    } else {
        puts("Error: Input format was incorrect.");
    }

    return 0;
}