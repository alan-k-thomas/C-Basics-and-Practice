//Write a program to input student numbers and marks in 3 subjects. If all the marks are above 40 display the students pass in all subjects else fail.

#include<stdio.h>
int main()
{
    int a, x, y, z;
    printf("Enter student number: ");
    scanf("%d", &a);
    printf("Enter marks in any 3 subjects: ");
    scanf("%d%d%d", &x, &y, &z);
    if(x>40&&y>40&&z>40)
    {
        printf("%d, You PASS\n", a);
    }
    else
    {
        printf("%d, You FAIL\n", a);
    }
    return 0;
}