//Write a program to accept and print an array of size n where n is given from the keyboard.
#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter a size: \n");
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Array values are: \n");
    for (int i = 0; i<n; i++)
    {
        printf("%d\t", ar[i]);
    }
    printf("\n");
return 0;
}