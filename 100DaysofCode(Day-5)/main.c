/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

/*#include <stdio.h>
#include <math.h>
int main()
{
    float principal, rate, time;
    float SimpleInterest,CompoundInterest;
    
    printf("Enter Principal Amount:");
    scanf("%f",&principal);
    printf("Enter Interest Rate:");
    scanf("%f",&rate);
    printf("Enter Time:");
    scanf("%f",&time);
    
    SimpleInterest = (principal * rate * time)/100;
    CompoundInterest = principal * pow((1 + rate /100),time)-principal;
    printf("Simple Interest=%.2f, Compund Interest=%.2f\n",SimpleInterest,CompoundInterest);
    return 0;
}*/

/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/

#include <stdio.h>
int main()
{
    int seconds,hour,minute,sec;
    printf("Enter time in seconds: ");
    scanf("%d",&seconds);
    
    hour = seconds / 3600;
    seconds = seconds % 3600;
    minute = seconds / 60;
    sec = seconds % 60;
    
    printf("%d:%d:%d\n", hour, minute, sec);
    return 0;
}


