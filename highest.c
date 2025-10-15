//Write a program to input 2 numbers and find the highest.
#include <stdio.h>
int main()
{
    int x, y;
    printf("\nEnter 2 numbers: ");
    scanf("%d%d", &x, &y);
    if (x>y)
    {
        printf("%d is greater\n", x);
    }
    else
    {
        printf("%d is greater\n", y);
    }
    return 0;
}