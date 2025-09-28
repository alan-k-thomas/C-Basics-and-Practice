//Create a program to input the length and breadth of a rectangle and find the area.
#include<stdio.h>
int main()
{
    int length, breadth, area;
    printf("Enter the length and breadth of the rectangle: \n");
    scanf("%d %d", &length, &breadth);
    area = length * breadth;
    printf("Area of the rectangle = %d\n", area);
    return 0;
}