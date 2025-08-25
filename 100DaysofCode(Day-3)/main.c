/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

/*#include <stdio.h>
int main()
{
    int temp_in_c,temp_in_far;
    printf("Enter temperature in Clesius");
    scanf("%d", &temp_in_c);
    temp_in_far=temp_in_c*9/5 +32;
    printf("Fahrenheit=%d\n",temp_in_far);
    return 0;
    
}*/

/*Q6: Write a program to swap two numbers using a third variable.
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include <stdio.h>
int main()
{
    int Num1, Num2, Num3;
    printf("Enter First Number: ");
    scanf("%d",&Num1);
    printf("Enter Second Number: ");
    scanf("%d",&Num2);
    
    printf("Entered numbers are: %d %d\n",Num1,Num2);
    
    Num3 = Num1;
    Num1 = Num2;
    Num2 = Num3;
    
    printf("After swap: %d %d\n",Num1,Num2);
    return 0;
}
