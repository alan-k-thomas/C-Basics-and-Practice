#include<stdio.h>
int main()
{
    int x;
    printf("Enter your age: ");
    scanf("%d", &x);
    if(x>=18)
    {
        printf("You are eligible to vote\n");
    }
    else
    {
        printf("You are not eligible to vote\n");
    }
    return 0;
}