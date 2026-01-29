/*
    10 Structures: 17 Pointing To Struct Type

    "Self Referential Structure"

    Note:
    [1] When you want to make a struct pointer to point to a struct of the same type
        you should name your struct.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char father_name[30];
    char mother_name[30];
    char home_address[30];
}student_details_t;


typedef struct student {
    //student_t std_friend; // Error
    struct student* std_friend;
    char student_name[30];
    float student_degree;
    unsigned short student_id;
    student_details_t student_details; // Struct of struct
}student_t;


student_t omar, ali;

int main() {
    printf("10 Structures: 17 Pointing To Struct Type \n");
    printf("----------------------------------------- \n");

    omar.std_friend = &ali;
    printf("Address of ali = 0x%X \n", &ali);
    printf("0x%X \n", omar.std_friend);

    strcpy(ali.student_details.father_name, "ali");
    printf("%s \n", (omar.std_friend->student_details.father_name));

    return 0;
}