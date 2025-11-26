//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e[5];
    int i, n = 5;

    // Input details for 5 employees
    for (i = 0; i < n; i++) {
        printf("Enter details for Employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
        printf("\n");
    }

    // Write to binary file
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fwrite(e, sizeof(struct Employee), n, fp);
    fclose(fp);
    printf("Employee data written to file successfully.\n\n");

    // Read from binary file
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    struct Employee temp;
    printf("--- Employee Data from File ---\n");
    while (fread(&temp, sizeof(struct Employee), 1, fp) == 1) {
        printf("Name: %s | ID: %d | Salary: %.2f\n", temp.name, temp.id, temp.salary);
    }

    fclose(fp);

    return 0;
}
