//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    FILE *fin, *fout;
    char ch;

    // Open input file in read mode
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Could not open input.txt!\n");
        return 1;
    }

    // Open output file in write mode (overwrite old content)
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not open output.txt!\n");
        fclose(fin);
        return 1;
    }

    // Read character by character, convert to uppercase, write to output file
    while ((ch = fgetc(fin)) != EOF) {
        ch = toupper(ch);   // convert to uppercase
        fputc(ch, fout);
    }

    // Close both files
    fclose(fin);
    fclose(fout);

    printf("File converted successfully! Check output.txt.\n");

    return 0;
}
