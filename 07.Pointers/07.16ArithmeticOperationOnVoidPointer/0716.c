/*
    07 Pointers: 16 Arithmetic Operation On Void Pointer

    Note :
    [1] When we increment the void pointer (Ptr += 1), we simply tell the pointer to access one byte more in the memory.
*/


#include <stdio.h>
#include <stdlib.h>

unsigned int Numbers[5] = {0xAABBCCDD,0x11223344,0x55,0x66,0x77};
void *Ptr = NULL; /* 1 Byte */

int main()
{
    printf("07 Pointers: 16 Arithmetic Operation On Void Pointer \n");
    printf("---------------------------------------------------- \n");

    Ptr = &Numbers[0];
    printf("0x%X \n", *((unsigned int *)Ptr)); /* 0xAABBCCDD */
    printf("0x%X \n", *((unsigned short *)Ptr + 1)); /* 0xAABB */
    Ptr += 1;
    printf("0x%X \n", *((unsigned int *)Ptr)); /* 0x44AABBCC */
    Ptr += 1;
    printf("0x%X \n", *((unsigned int *)Ptr)); /* 0x3344AABB */

    printf("---------------------------------------------------- \n");

    Ptr = &Numbers[0];
    // (unsigned int *)Ptr += 1; // Invalid
    Ptr = (unsigned int *)Ptr + 1; // This way : Moving four bytes
    printf("0x%X \n", *((unsigned int *)Ptr)); /* 0x11223344 */

    printf("---------------------------------------------------- \n");

    Ptr = &Numbers[0];
    Ptr = (unsigned short *)Ptr + 1; // Moving two bytes
    printf("0x%X \n", *((unsigned int *)Ptr)); /* 0x3344AABB */

    printf("---------------------------------------------------- \n");

    Ptr = &Numbers[0];
    Ptr = (unsigned char *)Ptr + 1; // Moving one bytes
    printf("0x%X \n", *((unsigned int *)Ptr)); /* 0x44AABBCC */

    printf("---------------------------------------------------- \n");

    Ptr = &Numbers[0];
    Ptr = (unsigned int *)Ptr++; // Post increment has no meaning
    printf("0x%X \n", *((unsigned int *)Ptr)); /* 0xAABBCCDD */
    Ptr = (unsigned int *)++Ptr; // Post increment has meaning
    printf("0x%X \n", *((unsigned int *)Ptr)); /* 0x44AABBCC */
    Ptr = (unsigned int *)++Ptr;
    printf("0x%X \n", *((unsigned int *)Ptr)); /* 0x3344AABB */

    printf("---------------------------------------------------- \n");
    
    // Add one after the explicit casting means adding 4 bytes
    Ptr = &Numbers[0];
    printf("0x%X \n", *((unsigned int *)Ptr));     /* 0xAABBCCDD */
    printf("0x%X \n", *((unsigned int *)Ptr + 1)); /* 0x11223344 */
    printf("0x%X \n", *((unsigned int *)Ptr + 2)); /* 0x00000055 */
    printf("0x%X \n", *((unsigned int *)Ptr));     /* 0xAABBCCDD */


    return 0;
}
