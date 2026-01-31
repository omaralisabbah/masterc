/* ============================================================================
    11 File Processing: 01 C Files Introduction & I/O Streams
    ============================================================================

    File handling in C is the process in which we create, open, read, write, 
    and close operations on a file using "Streams".

    1. WHY DO WE NEED FILE HANDLING?
    - Reusability: Data persists after the program closes.
    - Portability: Files can be moved between systems easily.
    - Efficiency: Handle large datasets without manual typing.
    - Storage: Store more data than what fits in RAM at once.

    2. TYPES OF FILES IN C
    - Text Files (.txt): ASCII characters, human-readable, ends with '\n'.
    - Binary Files (.bin): 0s and 1s, mirrors memory storage, more secure/compact.

    3. THE STANDARD STREAMS (Always Available)
    - stdin  : Standard Input (Keyboard)
    - stdout : Standard Output (Console)
    - stderr : Standard Error (Console, Unbuffered)

    

    4. CORE FUNCTIONS
    - fopen()  : Open/Create a stream.
    - fclose() : Close a stream.
    - fprintf(): Formatted write to stream.
    - fscanf() : Formatted read from stream.
    ============================================================================
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("11 File Processing: 01 C Files Introduction\n");
    printf("------------------------------------------ \n");

    // FILE pointer represents the stream
    FILE *fptr;
    int inputNum;

    // --- OPERATION 1: CREATING/WRITING TO A FILE ---
    // We use "w" mode: Create if non-existent, overwrite if it exists.
    fptr = fopen("lesson_data.txt", "w");

    if (fptr == NULL) {
        fprintf(stderr, "Critical Error: Could not open file for writing.\n");
        return 1;
    }

    fprintf(fptr, "100\n200\n300\n"); // Writing to the file stream
    printf("[Success] Data written to 'lesson_data.txt'.\n");
    
    // Always close to flush the buffer to the physical disk
    fclose(fptr);


    // --- OPERATION 2: READING FROM A FILE ---
    // We use "r" mode: Open for reading only.
    fptr = fopen("lesson_data.txt", "r");

    if (fptr == NULL) {
        fprintf(stderr, "Critical Error: Could not open file for reading.\n");
        return 1;
    }

    printf("[Reading] Data retrieved from stream:\n");
    
    // Using a loop to read until End Of File (EOF)
    while (fscanf(fptr, "%d", &inputNum) != EOF) {
        printf("Stream output -> Value: %d | Square: %d\n", inputNum, (inputNum * inputNum));
    }

    fclose(fptr);


    // --- OPERATION 3: DEMONSTRATING STDOUT vs STDERR ---
    printf("\n--- Stream Redirection Demo ---\n");
    fprintf(stdout, "This message goes to Standard Output.\n");
    fprintf(stderr, "This message goes to Standard Error (Immediate visibility).\n");

    printf("\n------------------------------------------ \n");
    printf("File Processing Lesson Complete.\n");

    return 0;
}