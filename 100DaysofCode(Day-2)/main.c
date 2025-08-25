//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
//Sample Test Cases:
//Input 1:
//5 10
//Output 1:
//Area=50, Perimeter=30
//Input 2:
//3 7
//Output 2:
//Area=21, Perimeter=20

//#include <stdio.h>

//int main()
//{
    
 //   float length,width,area,perimeter;
    
//    printf("Enter the length of rectangle:");
 //   scanf("%f",&length);
    
//    printf("Enter the width of rectangle:");
//    scanf("%f",&width);
    
//    area = length * width;
//    perimeter = 2 * (length + width);
    
//    printf("\nArea of the rectangle: %.2f\n",area);
//    printf("Perimeter of the rectangle:%.2f\n",perimeter);
    
//    return 0;
//}

//Q4: Write a program to calculate the area and circumference of a circle given its radius.
//Sample Test Cases:
//Input 1:
//7
//Output 1:
//Area=153.94, Circumference=43.96

//Input 2:
//3
//Output 2:
//Area=28.27, Circumference=18.85

#include <stdio.h>

int main()
{
    float radius,area,circumference;
    
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    
    area = 3.14 * radius * radius;
    circumference = 2 * (3.14 * radius);
    
    printf("\nArea of the circle: %.2f\n",area);
    printf("Perimeter of the circle %.2f\n",circumference);
    
    return 0;
    
}
