/*
    02 Operators And Operations: 10 Explicit Data Conversions

    Explicit data conversion, often referred to as type casting or simply casting,
    is a method used by programmers to manually convert a value from one data type to another.
    
    Unlike implicit conversions, which are handled automatically by the compiler,
    explicit conversion requires the programmer to explicitly specify the target data type using a special syntax. 
    

    The Syntax for Type Casting: (type_name) expression;


    How and When to Use Explicit Casting
    The primary reason to use explicit casting is to force a calculation to use a higher precision data type than the operands naturally possess.


    Note :
    [1] Always conversion from the smaller to the bigger otherwise data lost.
    [2] Explicit casting is used when the default implicit conversion rules are insufficient, undesired, or would lead to a loss of data. 
    [3] If we downgrade from a higher data type to a lower data type then it causes loss of bits.
    [4] Sometimes, you can do explicit casting and sometimes not.
    [5] Do not let the compiler to make implicit casting, (you have to control it).
*/

#include <stdio.h>

float Variable = 22.594;
double Value = 2.3412127;

unsigned int NumberOne = 7;
unsigned int NumberTwo = 2;
unsigned int integer_result = 0;
float float_result = 0;

float Var1 = 51.15;
float Var2 = 12.61;

int main() {

    printf("02 Operators And Operations: 10 Explicit Data Conversions \n");
    printf("--------------------------------------------------------- \n");

    int dividend = 7;
    int divisor = 2;
    float result_implicit;
    float result_explicit;

    // Implicit (Incorrect result for decimals):
    // Integer division happens first (7/2 results in 3), then 3 is assigned to float.
    result_implicit = dividend / divisor; 
    printf("Implicit result: %f\n", result_implicit); // Output: 3.000000

    // Explicit (Correct result):
    // We explicitly cast 'dividend' to float *before* the division occurs.
    // The compiler sees a float and an int, promotes the 'divisor' to float implicitly,
    // and performs floating-point division.
    result_explicit = (float)dividend / divisor; 
    printf("Explicit result: %f\n", result_explicit); // Output: 3.500000

    printf("--------------------------------------------------------- \n");

    printf("Variable = %f \n", Variable);
    printf("Value = %0.7f \n", Value);

    // If I did it conversely, It will done noramaly
    Variable = Value; // downgrading
    printf("Variable = %0.8f \n", Variable); // 2.34121275 => data lost


    printf("--------------------------------------------------------- \n");

    // Implicit conversion
    integer_result = NumberOne / NumberTwo; // (7 / 2 = 3.5) => the result is unsigned int
    printf("integer_result  = %i \n", integer_result);
    printf("integer_result  = %f \n", integer_result);

    // Explicit conversion
    float_result = (float)NumberOne / (float)NumberTwo; // We floating operand explicitly.
    printf("float_result  = %i \n", float_result);
    printf("float_result  = %f \n", float_result);


    printf("--------------------------------------------------------- \n");

    integer_result = NumberOne / NumberTwo;
    printf("integer_result  = %i - %f \n", integer_result, integer_result);

    integer_result = (float)NumberOne / (float)NumberTwo;
    printf("float_result  = %i - %f \n", float_result, float_result);

    integer_result = Var1 / Var2; //Impicit casting
    printf("integer_result  = %i \n", integer_result);

    integer_result = (unsigned int)Var1 / (unsigned int)Var2; //Explicit casting
    printf("integer_result  = %i \n", integer_result);

    return 0;
}