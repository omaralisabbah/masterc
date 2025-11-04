/*
    02 Operators And Operations: 04 Relational Operators
    
    Relational operators in C are used to compare two values (operands) to determine the relationship between them.
    These operators always return a Boolean result: 1 if the relationship is true, and 0 if the relationship is false. 

    There are six relational operators in C: 
     
    Operator    Name	                        Example	Returns 1 if:
    ==	        Equal to	                    a == b	a is equal to b
    !=	        Not equal to	                a != b	a is not equal to b
    >	        Greater than	                a > b	a is greater than b
    <       	Less than       	            a < b	a is less than b
    >=      	Greater than or equal to    	a >= b	a is greater than or equal to b
    <=      	Less than or equal to       	a <= b	a is less than or equal to b


    Common Pitfall: == vs. =
    A very frequent mistake for beginners in C is confusing the assignment operator (=) with the equality operator (==). 

    = assigns a value: int x = 5;
    == checks for equality: if (x == 5) 

    If you accidentally use = inside an if condition (e.g., if (x = 5)),
    the expression will assign 5 to x and then treat the assigned value (5, which is non-zero) as "true,"
    causing the if block to execute even if you intended a comparison.
*/


#include <stdio.h>

int main() {

    printf("02 Operators And Operations: 04 Relational Operators \n");
    printf("---------------------------------------------------- \n");

    int num1 = 10, num2 = 20;

    // Equal to
    if (num1 == num2) {
        printf("num1 is equal to num2\n");
    } else {
        printf("num1 is NOT equal to num2\n");
    }

    // Greater than
    if (num2 > num1) {
        printf("num2 is greater than num1\n");
    }

    // Less than or equal to
    if (num1 <= num2) {
        printf("num1 is less than or equal to num2\n");
    }

    // The result of a relational operation is an integer (1 or 0)
    int result = (num1 != num2); 
    printf("The result of (num1 != num2) is: %d\n", result); // Output: 1 (True)

    return 0;
}