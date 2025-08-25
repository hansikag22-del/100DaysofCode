//Q1: Write a program to input two numbers and display their sum.
//Sample Test Cases:
//Input 1:
//3 4
//Output 1:
//Sum = 7

//Input 2:
//-1 20
//Output 2:
//Sum = 19

//#include <stdio.h>
//int main()
//{
 //   int num1, num2, sum;
 //   printf("Enter 1st Number");
  //  scanf("%d",&num1);
 //   printf("Enter 2nd Number");
 //   scanf("%d",&num2);
  //  sum=num1+num2;
  //  printf("The sum of numbers is:%d\n",sum);
  // return 0;
//}

//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
//Sample Test Cases:
//Input 1:
//10 2
//Output 1:
//Sum=12, Diff=8, Product=20, Quotient=5

//Input 2:
//7 3
//Output 2:
//Sum=10, Diff=4, Product=21, Quotient=2

#include <stdio.h>
int main()
{
    int Num1,Num2,sum,difference,product,quotient;
    printf("Enter First Number");
    scanf("%d",&Num1);
    printf("Enter Second Number");
    scanf("%d",&Num2);
    sum=Num1+Num2;
    difference=Num1-Num2;
    product=Num1*Num2;
    quotient=Num1/Num2;
    printf("The sum is:%d\n",sum);
    printf("The difference is:%d\n",difference);
    printf("The product is:%d\n",product);
    printf("The quotient is:%d\n",quotient);
    return 0;
}
