//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // size of array
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int repeated = -1;

    // Use XOR approach
    int xor_all = 0;
    int xor_arr = 0;

    for (int i = 0; i < n; i++) {
        xor_arr ^= arr[i];       // XOR of all array elements
        xor_all ^= i;            // XOR of 0 to n-1
    }
    xor_all ^= n;                // include n

    repeated = xor_arr ^ xor_all; // repeated element

    printf("%d\n", repeated);

    return 0;
}
