/*
    08 Characters And Strings: 05 String Handling Library

    The strpbrk Function

    The strpbrk (string pointer break) function searches a string for the 
    first occurrence of ANY character contained in a specified set of 
    characters.

    Function Descriptions

    1. strpbrk:
       Locates the first occurrence in string 's1' of any character 
       from string 's2'.

    How It Works
    Input:
        1. s1: The string to be searched.
        2. s2: The string containing the characters to look for (the "break" set).

    Return Value:
        - A pointer to the first character in s1 that matches any 
          character in s2.
        - NULL if no characters from s2 are found in s1.

    Logic Breakdown

    Unlike strchr (which looks for one specific character) or strstr 
    (which looks for a specific sequence), strpbrk is like a multi-tool. 
    It checks each character of the source string against the entire 
    list of target characters.

    String (s1)      Break Set (s2)    Result
    "Hello 123"      "0123456789"      Pointer to '1'
    "user@host"      "@."              Pointer to '@'
    "Apple"          "xyz"             NULL
*/



#include <stdio.h>
#include <string.h>

int main() {
    printf("08 Characters And Strings: 05 String Handling Library \n");
    printf("-------------------------------------------------------- \n");

    const char *description = "Item ID: #4402; Price: $19.99";
    const char *symbols = "#$;";

    // Find the first occurrence of any symbol in the set
    char *match = strpbrk(description, symbols);

    while (match != NULL) {
        printf("Found symbol '%c' at position: %ld\n", *match, match - description);
        
        // Search for the NEXT symbol starting from the next character
        match = strpbrk(match + 1, symbols);
    }

    // Practical Use: Finding the first vowel
    const char *word = "Rhythm";
    const char *vowels = "aeiouAEIOU";
    
    char *firstVowel = strpbrk(word, vowels);

    if (firstVowel) {
        printf("\nFirst vowel in \"%s\" is '%c'\n", word, *firstVowel);
    } else {
        printf("\nNo vowels found in \"%s\" (standard vowels)\n", word);
    }

    return 0;
}