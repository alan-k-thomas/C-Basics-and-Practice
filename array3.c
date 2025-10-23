//Write a program to accept and print an array of size n where n is given from the keyboard. Also find the sum of arrays and print it in reverse order.
#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a size: \n");
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        sum = sum + i;
    }
    printf("Sum of arrays = %d\n", sum);
    printf("Reversed array values are: \n");
    for (int i = n-1; i>0; i--)
    {
        printf("%d\t", ar[i]);
    }
    printf("\n");
return 0;
}