//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>

int main() {
    char str[100];

    // Input string
    fgets(str, sizeof(str), stdin);

    // Convert lowercase to uppercase manually
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   // ASCII conversion
        }
    }

    // Output
    printf("%s", str);

    return 0;
}
