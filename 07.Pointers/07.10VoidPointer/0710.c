/*
    07 Pointers: 10 Void Pointer

    Void Pointer is a pointer that can point to any data type and its called
    (Generic Pointer)

    Note :
    [1] You can not dereference the void pointer directly.
    [2] Void incomplete data type because you do not know the size of memory
        that he need to point.
    [3] To solve void dereferencing problem, You need to make explicit type casting
        to void pointer. [*(unsigned int *)Ptr] = [unsigned int *Ptr = NULL;].

*/



#include <stdio.h>
#include <stdlib.h>

unsigned int  var1 = 12;
unsigned short  var2 = 51;
unsigned char  var3 = 63;

void* Ptr = NULL; // incomplete datatype

int main()
{
    printf("07 Pointers: 10 Void Pointer \n");
    printf("---------------------------- \n");

    printf("Size of Ptr %i \n", sizeof(Ptr)); // Storing Address depending on compiler
    printf("Size of Void = %i \n", sizeof(void)); // depending on compiler (gcc compiler = 1)

    printf("---------------------------- \n");

    Ptr = &var1;
    printf("var1 Address = 0x%X \n", Ptr);
    printf("var1 Value   = %i \n", *((unsigned int *)Ptr));

    Ptr = &var2;
    printf("var2 Address = 0x%X \n", Ptr);
    printf("var2 Value   = %i \n", *((unsigned short *)Ptr));

    Ptr = &var3;
    printf("var3 Address = 0x%X \n", Ptr);
    printf("var3 Value   = %i \n", *((unsigned char *)Ptr));

    printf("---------------------------- \n");

    *(unsigned int*)Ptr = var3 + 94;
    printf("var3 Incremented Value = %i \n", *(unsigned int*)Ptr);
    printf("var3 Value             = %i \n", var3);

    return 0;
}
