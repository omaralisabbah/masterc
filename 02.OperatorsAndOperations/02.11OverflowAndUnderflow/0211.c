/*
    02 Operators And Operations: 11 Overflow and Underflow

    Overflow and underflow are conditions that occur in C programming (and most other programming languages)
    when the result of an arithmetic operation exceeds the range of values that a specific data type is capable of storing.
 
    1. Overflow (Arithmetic Overflow)
    Overflow occurs when a calculation produces a result that is too large to be represented by the destination data type.

    How it Happens
    When an integer variable reaches its maximum possible value and is then incremented,
    it "wraps around" back to its minimum possible value.

    This behavior stems from how numbers are stored using a fixed number of bits (usually 8, 16, 32, or 64 bits) in memory,
    typically using two's complement representation for signed integers.


    2. Underflow (Arithmetic Underflow)
    Underflow primarily occurs with floating-point numbers (like float and double)
    when the result of a calculation is a number that is too small to be represented accurately
    by the data type's minimum positive value (i.e., very close to zero).

    How it Happens
    When the magnitude of a floating-point number is smaller than the smallest normalized value the format can represent,
    the result typically becomes zero (or "denormalized" to zero), losing precision.


    Consequences
    Underflow usually leads to a loss of precision, often resulting in the value becoming 0.0.
    While typically less catastrophic than signed integer overflow, it can still lead to incorrect results in sensitive numerical algorithms.

    Mitigation
    Programmers must be aware of data type limits and perform validation checks before operations
    to prevent unexpected behavior caused by overflow and underflow. Using larger data types
    (e.g., long long instead of int, or double instead of float) can mitigate these issues,
    but they do not eliminate the possibility of exceeding those limits eventually. 
*/

#include <stdio.h>


int main() {
    printf("02 Operators And Operations : 11 Overflow and Underflow \n");
    printf("------------------------------------------------------- \n");

    unsigned char num = 255; 
    printf("Max value of unsigned char: %d\n", UCHAR_MAX); // Prints 255

    num = num + 1; // Overflow occurs here

    printf("Value after overflow: %d\n", num); // Prints 0
    
    // Another example with signed integer:
    int large_num = INT_MAX; // Max value of a signed int (e.g., 2147483647)
    large_num = large_num + 1; // Overflow occurs here

    printf("Value after signed int overflow: %d\n", large_num); 
    // Prints INT_MIN (e.g., -2147483648)

    printf("------------------------------------------------------- \n");

    float tiny_num = FLT_MIN; // Smallest positive normalized float (e.g., 1.17e-38)
    printf("Smallest positive float: %e\n", tiny_num);

    tiny_num = tiny_num / 1000000.0f; // Underflow occurs here

    printf("Value after underflow: %e\n", tiny_num); // Prints 0.000000e+00
    
    return 0;
}