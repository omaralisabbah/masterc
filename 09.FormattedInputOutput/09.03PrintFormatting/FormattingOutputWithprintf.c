/*
    In many programming languages (like C, C++, Java, and Python),
    the printf function is the gold standard for creating clean, organized, and professional-looking output.
    Think of it as a template engine for your text.

    Instead of messy string concatenation, you use a format string and placeholders (format specifiers).

    1. The Anatomy of printf

    The basic structure looks like this: printf("Format String with %specifiers", value1, value2)

    Common Format Specifiers
    Specifier	    Data Type	                Example Output
    %d or %i	    Integer	                    42
    %f	            Floating-point (decimal)	3.141592
    %s	            String	                    "Hello World"
    %c	            Character	                'A'
    %x	            Hexadecimal	                2a


    2. Precision and Width Control

    The real power of printf lies in the modifiers you can tuck between the % and the letter.
    Setting Field Width

    If you want to align numbers in a column, you specify a width:

        %5d: The number will take up at least 5 spaces, right-aligned.

        %-5d: The number will take up 5 spaces, but left-aligned.

    Controlling Decimals (Precision)

    Tired of seeing 3.140000? You can truncate it:

    %.2f: Rounds to 2 decimal places (3.14).

    %8.2f: Takes up 8 total spaces and rounds to 2 decimal places.

*/

#include <stdio.h>

int main() {
    // Data for our report
    char server_name[] = "Alpha-Centauri";
    int uptime_days = 5;
    int uptime_hours = 9;
    int uptime_mins = 3;
    float cpu_load = 0.7456;
    double memory_usage = 84.2;

    // 1. Header with simple alignment
    printf("========================================\n");
    printf("        SYSTEM STATUS REPORT            \n");
    printf("========================================\n");

    // 2. String and Integer formatting
    // %-15s: Left-align string in 15 spaces
    // %d: Standard integer
    printf("%-15s: %s\n", "Server", server_name);
    
    // 3. Zero-padding (%02d)
    // Ensures time looks like 09:03 instead of 9:3
    printf("%-15s: %02d days, %02d:%02d\n", "Uptime", uptime_days, uptime_hours, uptime_mins);

    // 4. Floating point precision (%.2f)
    // Rounds 0.7456 to 0.75
    printf("%-15s: %.2f%%\n", "CPU Load", cpu_load * 100);

    // 5. Signed numbers and width (%+8.1f)
    // Forces a '+' sign and reserves 8 total spaces
    printf("%-15s: %+8.1f GB\n", "Memory Change", -1.2);
    printf("%-15s: %+8.1f GB\n", "Disk Change", 5.4);

    printf("========================================\n");

    return 0;
}