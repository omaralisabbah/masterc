/*
    In C, every piece of data you read or write travels through a Stream.
    When you use scanf, you are pulling bytes from the stdin stream and using conversion specifiers
    to "mold" those bytes into specific data types in memory.

    1. The Setup: Streams and Variables

    To handle different sizes and bases of data, you must match the variable type to the correct scanf format.
    Variable Type	        Format Specifier	    Description
    short	                %hd	                    2-byte integer
    long long	            %lld	                8-byte integer
    unsigned                int	                    %u Positive integers only
    int                     (Hex)	                %x Base-16 (e.g., 0xff)
    int                     (Octal)	                %o Base-8 (e.g., 077)
    double	                %lf	                    Long float (8-byte)
*/


#include <stdio.h>

int main() {
    // 1. Different types for different memory sizes
    short smallNum;
    long long massiveNum;
    unsigned int positiveOnly;
    int hexValue;
    int autoDetect;

    // Standard Output (stdout) for user instructions
    fprintf(stdout, "--- Advanced I/O Stream Lesson ---\n\n");

    // A. Reading Short and Long Long (%hd, %lld)
    fprintf(stdout, "Enter a small number and a massive number: ");
    if (fscanf(stdin, "%hd %lld", &smallNum, &massiveNum) != 2) {
        fprintf(stderr, "Error: Memory size mismatch or invalid input.\n");
        return 1;
    }

    // B. Reading Unsigned and Hexadecimal (%u, %x)
    fprintf(stdout, "Enter a positive number and a Hex value (e.g., 42 ff): ");
    fscanf(stdin, "%u %x", &positiveOnly, &hexValue);

    // C. Using %i for Auto-Detection
    // If you type '10', it's 10. If you type '010', it's 8. If you type '0x10', it's 16.
    fprintf(stdout, "Enter a number (prefix 0x for Hex, 0 for Octal): ");
    fscanf(stdin, "%i", &autoDetect);

    // Outputting results to stdout
    fprintf(stdout, "\n--- Summary of Stream Data ---\n");
    printf("Short (%%hd):     %hd\n", smallNum);
    printf("Long Long (%%lld): %lld\n", massiveNum);
    printf("Unsigned (%%u):   %u\n", positiveOnly);
    printf("Hex Input (%%x):  Stored as decimal %d\n", hexValue);
    printf("Auto-detect (%%i): Stored as decimal %d\n", autoDetect);

    return 0;
}