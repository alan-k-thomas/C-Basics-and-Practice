//using nested if find the highest among 3 numbers
#include<stdio.h>
int main()
{
    int x, y, z;
    printf("Enter any 3 numbers: ");
    scanf("%d%d%d", &x, &y, &z);
    if(x>y)
    {
        if(x>z)
        {
            printf("%d is the greatest\n", x);
        }
        else
        {
            printf("%d is the greatest\n", z);
        }
    }
    else if(y>x)
    {
        if(y>z)
        {
            printf("%d is the greatest\n", y);
        }
        else
        {
            printf("%d is the greatest\n", z);
        }
    }
    else
    {
        printf("%d is the greatest\n", z);
    }
}