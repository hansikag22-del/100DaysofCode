//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};

    // Input string
    fgets(str, sizeof(str), stdin);

    // Count characters and detect first repeating
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {   // only lowercase alphabets
            freq[ch - 'a']++;

            if (freq[ch - 'a'] == 2) {  // second occurrence = repeating
                printf("%c", ch);
                return 0;
            }
        }
    }

    // If no repeating character found
    printf("No repeating character");

    return 0;
}
