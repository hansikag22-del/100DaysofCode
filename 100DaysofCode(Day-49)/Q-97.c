//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    int i;

    // Read full name including spaces
    fgets(name, sizeof(name), stdin);

    // Print the first initial if not a space
    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c.", toupper(name[0]));
    }

    // Loop through rest of the name
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0' && name[i+1] != '\n') {
            printf("%c.", toupper(name[i+1]));
        }
    }

    printf("\n");
    return 0;
}
