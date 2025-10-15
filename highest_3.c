//Write a programe to input 3 numbers & find the highest using if else if.
#include<stdio.h>
int main()
{
    int x, y, z;
    printf("Enter any 3 numbers: ");
    scanf("%d%d%d", &x, &y, &z);
    if(x>y&&x>z)
    {
        printf("%d is the highest\n", x);
    }
    else if(y>x&&y>z)
    {
        printf("%d is the greatest\n", y);
    }
    else
    {
        printf("%d is the greatest\n", z);
    }
    return 0;
}