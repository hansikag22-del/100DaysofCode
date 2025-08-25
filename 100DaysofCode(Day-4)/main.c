/*Q7: Write a program to swap two numbers without using a third variable.
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

/*#include <stdio.h>
int main()
{
    int Num1,Num2,Num3;
    printf("Enter first number: ");
    scanf("%d",&Num1);
    printf("Enter second number: ");
    scanf("%d",&Num2);
    
    printf("Entered Numbers are: %d %d\n",Num1,Num2);
    
    Num3 = Num1;
    Num1 = Num2;
    Num2 = Num3;
    
    printf("After swap: %d %d\n",Num1,Num2);
    return 0;
}*/

/*Q8: Write a program to find and display the sum of the first n natural numbers.
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55
*/

#include <stdio.h>
int main()
{
    int Num, i, sum =0;
    printf("Enter the Number: ");
    scanf("%d", &Num);
    
    for(i = 1; i <=Num; i++){
        sum +=i;
    }
    printf("Sum=%d\n",sum);
    return 0;
}
