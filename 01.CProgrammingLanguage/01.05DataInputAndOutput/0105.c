/*
    01 C Programming Language: 05 Data Input And Output

    
    1. Output using printf():
    The printf() function is used to display formatted output to the console.
    It takes a format string and a variable number of arguments.

    - %d for integers
    - %i To print out integer value.
    - %c for characters
    - %s for strings
    - %f for floating-point numbers
    - %0.xxf print out a specific number of fraction numbers.

    
    2. Input using scanf():
    The scanf() function reads formatted input from the console and stores it in variables.
    It also takes a format string and a variable number of arguments,
    which must be the addresses of the variables where the input will be stored (using the & operator).

    mportant Note: When using scanf() for strings (%s), the variable should be a character array,
    and the & operator is not used before the array name as the array name itself acts as a pointer to the first element.
    
*/



#include <stdio.h>

int main() {

    printf("01 C Programming Language: 05 Data Input And Output \n");
    printf("--------------------------------------------------- \n");

    int num;
    float price;
    char name[20]; // Character array for string input

    printf("Enter an integer: ");
    scanf("%d", &num); // Notice the '&' before num

    printf("Enter a price: ");
    scanf("%f", &price);

    printf("Enter your name: ");
    scanf("%s", name); // No '&' needed for character arrays (strings)

    printf("You entered: %d, %.2f, %s\n", num, price, name);

    return 0;
}