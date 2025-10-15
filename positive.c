//Write a program to check whether a number is postive or negative or zero using if else if.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x>0)
    {
        printf("%d is positive\n", x);
    }
    else if(x<0)
    {
        printf("%d is negative\n", x);
    }
    else
    {
        printf("%d is zero\n", x);
    }
    return 0;
}