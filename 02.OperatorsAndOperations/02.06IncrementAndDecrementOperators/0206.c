/*
    02 Operators And Operations: 03 Increment and Decrement Operators
    
    The increment (++) and decrement (--) operators are unary operators in C 
    used to increase or decrease the value of a variable by one unit, respectively. 
    They are a fundamental part of C, offering a shorthand alternative to writing a = a + 1 or a = a - 1.


    1. Increment Operator (++) 
    Increases the value of the operand by 1. 
     
    Operator    Name	             Description
    ++var	    Prefix Increment	Increments the value before using the value in the expression.
    var++	    Postfix Increment	Uses the original value in the expression before incrementing the variable.


    2. Decrement Operator (--)
    Decreases the value of the operand by 1. 
     
    Operator    Name	            Description
    --var	    Prefix Decrement	Decrements the value before using the value in the expression.
    var--	    Postfix Decrement	Uses the original value in the expression before decrementing the variable.

    Prefix vs. Postfix Behavior Explained
    The difference between prefix and postfix is crucial when the operation is part of a larger expression or assignment. 

*/


#include <stdio.h>



int main() {

    printf("02 Operators And Operations: 03 Increment and Decrement Operators \n");
    printf("----------------------------------------------------------------- \n");

    int count = 5;

    count++;   // count is now 6 (postfix)
    --count;   // count is now 5 again (prefix)

    printf("----------------------------------------------------------------- \n");

    int a = 10, b;
    int x = 10, y;

    // PREFIX Example: The change happens FIRST
    // 1. 'a' becomes 11
    // 2. 'b' is assigned the NEW value of 'a' (11)
    b = ++a; 

    printf("Prefix Results: a = %d, b = %d\n", a, b); 
    // Output: Prefix Results: a = 11, b = 11


    // POSTFIX Example: The assignment happens FIRST
    // 1. 'y' is assigned the ORIGINAL value of 'x' (10)
    // 2. 'x' becomes 11 AFTER the assignment is complete
    y = x++; 

    printf("Postfix Results: x = %d, y = %d\n", x, y); 
    // Output: Postfix Results: x = 11, y = 10

    return 0;
}