//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    // Read full sentence including spaces
    fgets(sentence, sizeof(sentence), stdin);

    // Traverse the sentence
    while (1) {
        if (sentence[i] == ' ' || sentence[i] == '\0' || sentence[i] == '\n') {
            word[j] = '\0';  // end current word

            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }

            j = 0;  // reset index for next word
            if (sentence[i] == '\0') break; // end loop when string ends
        } else {
            word[j++] = sentence[i];
        }
        i++;
    }

    printf("%s\n", longest);

    return 0;
}
