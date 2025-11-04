/*
    02 Operators And Operations : 09 Implicit Data Conversions

    Implicit data conversion, also known as type coercion in C, is an automatic process performed
    by the compiler when different data types are mixed within a single expression.

    The primary goal is to convert the operands to a compatible data type so that the operation can proceed without error,
    generally promoting the values to the "larger" or more precise type to avoid loss of data. 

    The Process: Type Promotion Rules
    The C compiler follows a strict set of rules, often called usual arithmetic conversions or type promotion hierarchy,
    to decide how to convert data types: 

    1. Integer Promotion: Types smaller than int (like char, short, enum, or bit-fields)
    are automatically converted to int or unsigned int if an int cannot hold all original values.

    2. Hierarchy of Conversion: After integer promotions,
    if the operands still have different types, the compiler converts the "lower" type to the "higher" type in the following hierarchy
    (from lowest to highest): char -> short -> int -> long -> long long -> float -> double -> double


    Note :
    [1] If the compiler did not succeed in conversion process, Your data is gone (lost data).
    [2] Compiler sometimes can do implicit conversion and sometimes not.
    [3] Implicit conversion done successfully when you convert from lower type to bigger type in size.

*/

#include <stdio.h>

unsigned int VariableOne = 14;
unsigned long int VariableTwo = 44;

float folat_number = 2.34;
double double_number = 6.94551134548;

int main() {

    printf("02 Operators And Operations : 09 Implicit Data Conversions \n");
    printf("---------------------------------------------------------- \n");

    printf("Size of Variable One = %i \n", sizeof(VariableOne));
    printf("Size of Variable Two = %i \n", sizeof(VariableTwo));

    VariableOne = VariableTwo; // Implicit type conversion
    printf("Size of Variable Two = %i \n", VariableTwo);

    VariableOne = folat_number;
    printf("Size of Variable One = %i \n", VariableOne);

    printf("---------------------------------------------------------- \n");

    //compiler failed to cast
    printf("Example = %i \n", folat_number); // -536870912 ??
    printf("Example = %f \n", VariableOne); // 0.000000 
    printf("Variable One = %f \n", VariableOne); // 0.000000

    printf("---------------------------------------------------------- \n");

    printf("folat_number = %f \n", folat_number);
    printf("double_number = %f \n", double_number);

    //failed to cast (downgrade)
    folat_number = double_number;
    printf("failed_folat_number = %f \n", folat_number); // 6.945511

    return 0;
}