//Create a program using for loop to print factorial of a number
#include<stdio.h>
int main()
{
    int x, i, f=1;
    printf("Enter a number: \n");
    scanf("%d", &x);
    for(i=1; i<=x; i++)
    {
        f = f*i;
    }
    printf("The factorial = %d\n", f);
    return 0;
}