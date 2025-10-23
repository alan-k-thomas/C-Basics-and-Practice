//Write a program to accept and print an array of size 5
#include<stdio.h>
int main()
{
    int ar[5], i;
    printf("Enter 5 values: \n");
    for(int i=0; i<5; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Array values are: \n");
    for (int i = 0; i<5; i++)
    {
        printf("%d\n", ar[i]);
    }
return 0;
}