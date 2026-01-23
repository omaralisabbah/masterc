/*
    Format flags are the optional characters that immediately follow the % symbol.
    They change how the value is displayed—controlling alignment, signs, and padding.

    Think of them as the "styling" rules for your data.
    
    1. Essential Format Flags

    Here are the most common flags used in C-style printf:

    Flag	        Name	        Description	                                            Example (printf)	        Output
    -	            Left-Justify	Aligns text to the left within the given width.	        `	                        %-10s
    +	            Force Sign	    Prints a + for positive and - for negative numbers.	    %+d, 5	                    +5
    0	            Zero Pad	    Fills the empty width with 0s instead of spaces.	    %05d, 42	                00042
    (space)	        Space Sign	    Leaves a space for positive numbers (to align with -).	% d, 5	                    5
    #	            Alternative	    Shows 0x for hex, or forces a decimal point for floats.	%#x, 255	                0xff


    2. Using Multiple Flags Together

    You can combine flags to get specific results.
    The order usually doesn't matter, but they must come before the width and precision numbers.


    A Common Mistake: %f vs %lf
    While printf is usually smart enough to handle both float and double with %f,
    you might see %lf in older code. In modern C, %f works for both in printf,
    but always use %lf when using scanf to read a double from the keyboard!
*/

#include <stdio.h>

int main() {
    // Data setup
    char asset1[] = "Bitcoin";
    char asset2[] = "S&P 500";
    char asset3[] = "Gold";

    int id1 = 42, id2 = 128, id3 = 7;
    double change1 = 1250.40, change2 = -34.20, change3 = 5.00;

    // Header: Using '-' for left alignment of the name
    printf("%-5s | %-12s | %-10s\n", "ID", "Asset", "24h Change");
    printf("--------------------------------------\n");

    // Row 1: Zero-padding the ID and forcing the '+' sign on change
    // %04d   -> 4 digits wide, padded with zeros (0042)
    // %-12s  -> 12 wide, left-aligned
    // %+10.2f -> 10 wide, force + or - sign, 2 decimal places
    printf("%04d  | %-12s | %+10.2f\n", id1, asset1, change1);

    // Row 2
    printf("%04d  | %-12s | %+10.2f\n", id2, asset2, change2);

    // Row 3
    printf("%04d  | %-12s | %+10.2f\n", id3, asset3, change3);

    /*
        Breakdown of the Format Logic
        %04d (The ID): We want all IDs to have the same length for a consistent database look. It turns 7 into 0007.
        %-12s (The Name): By default, strings align to the right. The - flag pushes the text to the left, which is how we naturally read lists of words.
        %+10.2f (The Change): * The + flag is crucial here; in finance, seeing the + is just as important as seeing the -.
            The 10 (width) ensures the decimal points stay perfectly stacked on top of each other, making the list easy to scan.
    */
    return 0;
}

/*
    The Console Output

    ID    | Asset        | 24h Change
    --------------------------------------
    0042  | Bitcoin      |   +1250.40
    0128  | S&P 500      |     -34.20
    0007  | Gold         |      +5.00
*/