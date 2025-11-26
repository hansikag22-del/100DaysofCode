//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    char *words[50];
    int count = 0, i;

    // Read full name including spaces
    fgets(name, sizeof(name), stdin);

    // Remove newline at the end if present
    name[strcspn(name, "\n")] = 0;

    // Split the name into words
    char *token = strtok(name, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    // Print initials for all words except the last
    for (i = 0; i < count - 1; i++) {
        printf("%c.", toupper(words[i][0]));
    }

    // Print the last word (surname) in full
    if (count > 0) {
        printf(" %s\n", words[count - 1]);
    }

    return 0;
}
