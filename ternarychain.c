//Create a program to check a number is positive negative or zero using conditional operator
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: \n");
    scanf("%d", &x);
    (x>0)?printf("%d is positive\n", x):(x==0)?printf("%d is zero\n", x):printf("%d is negative\n", x);
    return 0;
}