//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256]; // store last index of each character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0;

    for (int end = 0; end < n; end++) {
        char c = s[end];
        if (lastIndex[(int)c] >= start) {
            start = lastIndex[(int)c] + 1; // move start past previous occurrence
        }
        lastIndex[(int)c] = end;
        int len = end - start + 1;
        if (len > maxLen)
            maxLen = len;
    }

    printf("%d\n", maxLen);

    return 0;
}
