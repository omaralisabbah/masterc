/*
    01 C Programming Language: 14 ASCII Value

    ASCII (American Standard Code for Information Interchange): 

    Is the most common character encoding format for text data in computers and on the internet.
    In standard ASCII-encoded data, there are unique values for 128 alphabetic, numeric or special additional characters and control codes.

    ASCII encoding is based on character encoding used for telegraph data.
    The American National Standards Institute first published it as a standard for computing in 1963.

    Programmers use the design of the ASCII character set to simplify certain tasks.
    For example, using ASCII character codes, changing a single bit easily converts text from uppercase to lowercase.


    Search about :
    - ASCII is a tiny subset of Unicode representing letters (A-Z Anda-z)
    - https://www.unicode.org/charts/PDF/U0000.pdf

*/

#include <stdio.h>

int main() {

    printf("01 C Programming Language: 14 ASCII Value \n");
    printf("----------------------------------------- \n");

    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
    
    return 0;
}