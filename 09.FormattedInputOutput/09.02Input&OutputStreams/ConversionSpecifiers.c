/*
    1. What Are Conversion Specifiers?
    - They are placeholders in formatted I/O functions (printf, scanf, sprintf, etc.).
    - They start with % and tell the compiler how to interpret or display data.
    - Example:

    printf("Value = %d", 10); (%d tells the compiler to print the integer 10.)


    2. General Structure
    A conversion specifier can include:

    % [flags] [width] [.precision] [length] specifier

    - Flags: Control alignment, padding, signs.
    - Width: Minimum field width.
    - Precision: Decimal places or string length.
    - Length: Adjusts size (short, long, etc.).
    - Specifier: Defines the type (int, float, char, etc.).


    3. Common Specifiers

    Specifier       Meaning                         Example                 Output 
    %d              %i Signed integer               printf("%d", 42);       42
    %u              Unsigned integer                printf("%u", 42);       42
    %f              Float (decimal)                 printf("%f", 3.14);     3.140000
    %e              %E Scientific notation          printf("%e", 3.14);     3.140000e+00
    %g              %G Shortest form (%f or %e)     printf("%g", 3.14);     3.14
    %c              Character                       printf("%c", 'A');      A
    %s              String                          printf("%s", "Omar");   Omar
    %o              Octal                           printf("%o", 42);       52
    %x              %X Hexadecimal                  printf("%x", 42);       2a
    %p              Pointer address                 printf("%p", &a);       0x7ffee...
    %%              Prints % itself                 printf("%%");           %


    4. Flags, Width, Precision
    - Flags:
    - (-) → Left align (%-5d` → 42   ).
    - (+) → Show sign (%+d → +42).
    - (0) → Pad with zeros (%05d → 00042).
    - Width: Minimum space (%6d →     42).
    - Precision:
    - For floats: decimal places (%.2f → 3.14).
    - For strings: max characters (%.3s → Oma).


    5. Length Modifiers
    - h → short (%hd).
    - l → long (%ld).
    - ll → long long (%lld).
    - L → long double (%Lf).
*/

#include <stdio.h>
int main() {
    int a = 42;
    float b = 3.14159;
    char c = 'X';
    char str[] = "Omar";

    printf("Integer: %d\n", a);
    printf("Float (2 decimals): %.2f\n", b);
    printf("Character: %c\n", c);
    printf("String: %s\n", str);
    printf("Hexadecimal: %X\n", a);
    printf("Pointer: %p\n", &a);

    return 0;
}

/*
    Output:
    Integer: 42
    Float (2 decimals): 3.14
    Character: X
    String: Omar
    Hexadecimal: 2A
    Pointer: 0x7ffee...
*/

/*
    7. Common Mistakes
    - Using the wrong specifier for a type (e.g., %d for float → undefined behavior).
    - Forgetting precision when formatting floats.
    - Mixing signed/unsigned incorrectly.
*/

/*
    8. Practice Challenge: Try predicting the output:
    printf("%05d\n", 7);
    printf("%-6sEnd\n", "Hi");
    printf("%.3f\n", 2.71828);
*/