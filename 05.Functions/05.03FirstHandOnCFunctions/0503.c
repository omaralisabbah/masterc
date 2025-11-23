/*
    05 Functions: 03 First Hand On C Functions

    Robot Example : [ Motors, Sensors, ... ]

    - Modularity
    - Reusablility
    - Maintainablility

    [1] Function that takes multiple parameters and returns the result of the computation.
    [2] Function that takes a single parameter, and doesn't give back the result explicitly (void).
    [3] Function that doesnt' take parameters and returns nothing.
    [4] Function that takes no parameters and return something.


    0 No Return (void)                  0 No Parameters (void)
    0 No Return (voud)                  1 Parameter List (int x, int y, ---)
    1 Data type (int / float / ..)      0 No Parameters (void)
    1 Data type (int / float / ..)      1 Parameter List (int x, int y, ---)

*/


#include <stdio.h>

// Function that takes multiple parameters and returns the result of the computation
int max( int a, int b){
    if(a>b)
        return a;
    else
        return b;
}


// Function that takes a single parameter, and doesn't give back the result explicitly (void).
void enter_bar(int age) {
    if( age > 18) {
        printf("You're %i \n", age);
    }else{
        printf("Sorry, your age less than 18. %i \n");
    }
    return;
}


// Function that doesnt' take parameters and returns nothing
void say_hello(void) {
    printf("Willkommen \n");
    return; // You could omit this return statement for functions returning void
}


// Function that takes no parameters and return something
int lucky_number() {
    return 99;
}



unsigned int Var1;
unsigned int Var2;

int main() {

    printf("05 Functions: 03 First Hand On C Functions \n");
    printf("------------------------------------------ \n");

    // Imagine If we need set of sequential operations So.. This is so dump.
    printf("Enter The First Number : %i \n", Var1);
    scanf("%i", &Var1);
    printf("Enter The Second Number : %i \n", Var2);
    scanf("%i", &Var2);
    printf("The sum is : %i \n", Var1 + Var2);

    printf("------------------------------------------- \n");

    // [1]
    printf("Greater number is : %i \n", max(Var1, Var2)); // Function arguments

    printf("------------------------------------------- \n");

    // [2]
    enter_bar(59);

    printf("------------------------------------------- \n");
    // [3]
    say_hello();

    printf("------------------------------------------- \n");
    // [4]
    printf("Lucky number function eturn : %i \n", lucky_number());
    
    return 0;
}