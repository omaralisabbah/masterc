
// to prevent anyone from changing variable value (VI)
static unsigned int  ObjectModule_SW_Version = 5;

static unsigned int ObjectSpeed = 0;

//Important or error (sequential execution)
static void PrintMoveObjectBackward_8_Times(void);

void MoveObjectForward(void){
    unsigned int Number = 0; // will reserve data in stack frame of the function
    static unsigned int NoOfCalling = 0; // will stay in (.data section in flash and ram) out of function frame

    printf("Move Object Forward \n");
    printf("NoOfCalling = %i \n", NoOfCalling);
    NoOfCalling++;
}

//----------------------------------------------------
void MoveObjectBackward(void){
    PrintMoveObjectBackward_8_Times();
    PrintMoveObjectBackward_8_Times();
}

//invisible to the rest of files
static void PrintMoveObjectBackward_8_Times(void){
    printf("Move Object Backward \n");
    printf("Move Object Backward \n");
    printf("Move Object Backward \n");
    printf("Move Object Backward \n");
    printf("Move Object Backward \n");
    printf("Move Object Backward \n");
    printf("Move Object Backward \n");
    printf("Move Object Backward \n");
}
//----------------------------------------------------

void MoveObjectLeft(void){
    printf("Move Object Left \n");
    printf("Object Speed = %i\n", ObjectSpeed);
}

void MoveObjectRight(void){
    printf("Move Object Right \n");
}

// Getter function for SW_Version variable
unsigned int GetObject_SW_Version(void){
    return ObjectModule_SW_Version;
}

// Setter function for ObjectSpeed variable
void SetObjectSpeed(unsigned int MS){
    if((MS < 0) || (MS > 50)){
        printf("Speed out of range !!! \n");
    }
    else{
        ObjectSpeed = MS;
    }
}