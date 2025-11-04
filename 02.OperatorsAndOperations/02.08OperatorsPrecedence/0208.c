/*
    02 Operators And Operations: 08 Operators Precedence
    
    in C determines the order in which operators in a single expression are evaluated.
    This is a set of rules that ensures expressions produce a predictable, consistent result across different compilers. 
    Operators Precedence:

    - Operator Precedence decides how an expression is evaluated.
    - Certain operators have high precedence than others.
    - For Example : Multiplication has a high precedence than the addition operator.

    - Operator Precedence and Associativity are two characteristics of operators that determine,
        the evaluation order of sub-expressions in absence of brackets.

    - Category                      - Operator                          - Associativity

    - Postifix                      - ()  [] -> .  ++    --             - Left  to Right
    - Unary                         - +  - ! ++ -- (type) * & sizeof    - Right to left
    - Multiplicative                - *  /  %                           - Left  to Right
    - Additive                      - +  -                              - Left  to Right
    - Shift                         - >> <<                             - Left  to Right
    - Relational                    - < <= > >=                         - Left  to Right
    - Equality                      - == !=                             - Left  to Right
    - Bitwise AND                   - &                                 - Left  to Right
    - Bitwise XOR                   - ^                                 - Left  to Right
    - Bitwise OR                    - |                                 - Left  to Right
    - Logical AND                   - &&                                - Left  to Right    
    - Logical OR                    - ||                                - Left  to Right
    - Conditional                   - ?:                                - Right to left
    - Assignment                    - = += -= *= /= %= >>= <<= &= ^= |= - Right to left
    - Comma                         - ,                                 - Left  to Right


    Best Practice
    If you are ever unsure about the precedence or associativity of operators in a complex expression,
    use parentheses () to explicitly define the order of operations.
    Parentheses have the highest precedence and make the code easier to read and maintain. 
*/


#include <stdio.h>


int main() {

    printf("02 Operators And Operations: 08 Operators Precedence \n");
    printf("---------------------------------------------------- \n");
    // [1] Ans 4 15
    // int i = 5;
    // int j = 10;
    // int k = 15;
    // printf("%d \n", sizeof(k /= i + j));
    // printf("%d \n", k);

    printf("---------------------------------------------- \n");
    // [2] Ans Compiler time error
    // int x = 1, 2, 3;
    // printf("%d \n", x);

    printf("---------------------------------------------- \n");
    // [3] Ans 1
    // int y;
    // y = 1, 2, 3; // Precedence = is higher than comma ,
    // printf("%d \n", y);

    printf("---------------------------------------------- \n");
    // [4] Ans 3
    // int z = (1, 2, 3); // Left to Right precedence
    // printf("%d \n", z);

    printf("---------------------------------------------- \n");
    // [5] Ans 512
    // printf("%d \n", 1 << 2 + 3 << 4); // Left to Right => (1 << 5 = 32) and  (32 << 4 = 512)

    printf("---------------------------------------------- \n");
    // [6] Ans 4
    // Assume sizeof character 1 byte and sizeof integer 4 btyes
    // printf("%d \n", sizeof(printf("Embedded Diploma")));
    // printf returns the number of characters to be printed which is an integer value
    // sizeof operator return sizeof(int), and Embedded Diploma will not be printed.

    printf("---------------------------------------------- \n");
    // [7] Ans Compiler Dependent "Embedded Diploma" or "Diploma Embedded"
    // int f1() {
    //     printf("Embedded");
    //     return 1;
    // }

    //     int f2() {
    //     printf("Diploma");
    //     return 1;
    // }

    // int ans = f1() + f2();

    printf("---------------------------------------------- \n");
    // [8] Ans 0
    // int y = 0;
    // int x = (~y == 1); // 255 ?= 1  => 0
    // printf("%d", x);

    printf("---------------------------------------------- \n");
    // [9] Ans 1
    // int a = 0;
    // int b;
    // a = (a == (a == 1));
    // printf("%d", a);

    printf("---------------------------------------------- \n");
    // [10] Ans 40 30
    // int x = 10;
    // int y = 20;
    // x += y += 10;
    // printf("%d %d", x, y); // y = 30 and then x = 40

    printf("---------------------------------------------- \n");
    // [11] Ans 13 12
    int x = 10;
    int y = (x++, x++, x++);
    printf("%d %d", x, y);


    return 0;
}