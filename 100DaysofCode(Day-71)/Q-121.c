//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    // Taking user inputs
    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    // Creating and opening file in write mode
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error creating the file!\n");
        return 1;
    }

    // Writing data to file
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Closing the file
    fclose(fp);

    // Confirmation message
    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
