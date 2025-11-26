//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;

    // Read entire sentence with spaces
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        // If space or end of line → reverse current word
        if (str[i] == ' ' || str[i] == '\n') {
            reverse(&str[start], &str[i-1]);
            start = i + 1; // next word
        }
        i++;
    }

    // Print output
    printf("%s", str);

    return 0;
}
