//Write a program to accept and print an array of size 10
#include<stdio.h>
int main()
{
    int ar[10], i;
    printf("Enter 10 values: \n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Array values are: \n");
    for (int i = 0; i<10; i++)
    {
        printf("%d\n", ar[i]);
    }
return 0;
}