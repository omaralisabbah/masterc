/*
    01 C Programming Language: 09 Data Types

    - Data types in c used for declaring variables or functions of different types.
    - The type of a variable determine how much space it occupies in storage and how the bit pattern stored is interpreted.

    Data Type in C:
    - Basic data types (int, float, double, char, bool, void)
    - Derived data types (array, pointer, function)
    - User defined data types (structure, union, enumuration)

    GNU GCC Compiler on 64Bit PC : 1 Byte = 8 Bits

    Type                        Storage Size                        Value Range
    - char                      - 1 Byte                            - -128 to 127 or 0  to 255 (Depends on  IDE Configrations)
    - unsigned char             - 1 Byte                            - 0 to 255
    - signed char               - 1 Byte                            - -128 to 127
    - int (Default Signed)      - 2 or 4 Bytes                      - -32768 to 32767 or -2147483648 to 2147483647 Depends on Compiler Platform
    - unsigned int              - 2 or 4 Bytes                      - 0 to 65535 or 0 to 4294967295
    - short int(Default Signed) - 2 Bytes                           - -32768 to 32767
    - long int (Default Signed) - 4 Bytes                           - -2,147,483,648 to 2,147,483,647
    - short (Default Signed)    - 2 Bytes                           - -32768 to 32767
    - unsigned short            - 2 Bytes                           - 0 to 65535
    - long (Default Signed)     - 4 Bytes                           - -2,147,483,648 to 2,147,483,647
    - unsigned long             - 4 Bytes                           - 0 to 4,294,967,295
    - long long(Default Signed) - 8 Bytes                           - -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    - unsigned long long        - 8 Bytes                           - 0 to 18446744073709551615

    (https://www.geeksforgeeks.org/c/data-types-in-c)
    
*/

#include <stdio.h>

long long Variable = 129491249;

int main() {

    printf("01 C Programming Language: 09 Data Types \n");
    printf("---------------------------------------- \n");

    printf("Size of long long %i \n", sizeof(long long));
    
    return 0;
}