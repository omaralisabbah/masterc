
#include "0708C.c"

extern unsigned int  ObjectModule_SW_Version; // 0 spcace reserved

/* Public Interfaces */
void MoveObjectForward(void);
void MoveObjectBackward(void);
void MoveObjectLeft(void);
void MoveObjectRight(void);

unsigned int GetObject_SW_Version(void);
void SetObjectSpeed(unsigned int MS);