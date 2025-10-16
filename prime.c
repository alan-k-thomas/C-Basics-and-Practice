//Create a program to check whether the input number is prime or not.
#include<stdio.h>
int main()
{
    int i =1, x, c=0;
    printf("Enter a number: \n");
    scanf("%d", &x);
    while(i<=x)
    {
        if(x%i==0)
        {
            c++;
        }
        i++;
        if(c==2)
        {
            printf("%d is a prime number\n", x);
        }
        else
        {
            printf("%d is not a prime number\n", x);
        }
    }
}