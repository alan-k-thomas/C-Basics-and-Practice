//Create a program to find the highest among 2 numbers using conditional operators
#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter 2 numbers: \n");
    scanf("%d%d", &x, &y);
    (x>y)?printf("%d is the highest\n", x):printf("%d is the highest\n", y);
    return 0;
}