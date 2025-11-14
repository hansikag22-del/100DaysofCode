//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Input string
    fgets(str);  
  
    // Count characters manually
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    // Output
    printf("%d", count);

    return 0;
}
