//create a program using for loop to print Natural numbers and their sum upto limit
#include<stdio.h>
int main()
{
    int x, i, sum =0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for(i =1; i<=x; i++)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("The sum = %d\n", sum);
    return 0;
}