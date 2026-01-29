/*
	10 Structures: 19 Union Definition

    The C language provides the flexibility to the programmer to create the own data type
    as a per their requirement. These data type is called (user-define data type) or (non-primitive data type)

    The C standard provides the tags like struct, union or enum to create their self-defined data type.

    What is a union in C ?

    - A Union is used to store different data types in the same memory location.
    - In Union, We can define many members as per the requirement but here we need to remember
    that stored value is shared by  all members.
    - It means a union provides an efficient way of using the same memory location but carefully.

*/

#include <stdio.h>
#include <stdlib.h>

typedef union {
    unsigned int emp_id;
    float emp_degree;
}emp_info;

emp_info omar;
emp_info *ptr_omar;

int main() {
	printf("10 Structures: 19 Union Definition \n");
	printf("---------------------------------- \n");

    printf("%i \n", sizeof(omar)); // 4 Byte as the biggest data type in union
    omar.emp_degree = 30.5;
    printf("omar.student_degree = %0.2f \n", omar.emp_degree);

    omar.emp_id = 33;
    printf("omar.student_id = %i \n", omar.emp_id);
    printf("%i \n", sizeof(omar));

    printf("---------------------------------- \n");

    ptr_omar = &omar;
    ptr_omar->emp_degree = 2.2;
    printf("%0.2f \n", omar.emp_degree);

    (*ptr_omar).emp_id = 12;
    printf("omar id = %i \n", omar.emp_id);

	return 0;
}