//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    char str[100];
    int length = 0, isPalindrome = 1;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Find length manually (excluding newline)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Check palindrome
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    // Output result
    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
