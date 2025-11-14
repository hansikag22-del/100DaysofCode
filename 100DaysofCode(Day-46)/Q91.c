//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/


#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100], result[100];
    int j = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Copy only non-vowel characters
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = tolower(str[i]);
        if (ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u') {
            result[j++] = str[i];
        }
    }

    result[j] = '\0'; // end the new string

    // Output result
    printf("%s", result);

    return 0;
}
