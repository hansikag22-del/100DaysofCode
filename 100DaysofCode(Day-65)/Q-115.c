//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    scanf("%s %s", s, t);

    int lenS = strlen(s), lenT = strlen(t);

    if (lenS != lenT) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0};

    // Count frequency of characters in s
    for (int i = 0; i < lenS; i++)
        freq[s[i] - 'a']++;

    // Subtract frequency based on characters in t
    for (int i = 0; i < lenT; i++)
        freq[t[i] - 'a']--;

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
