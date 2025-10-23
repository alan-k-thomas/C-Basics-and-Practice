//Create a program using nested for loop to print multiplication table of numbers 1, 2, 3 upto 5
#include<stdio.h>
int main()
{
    for (int i =1; i<=3; i++)
    {
        for (int j=1; j<=5; j++)
        {
            printf("%dx%d = %d\n", i, j, i*j);
        }
        printf("\n\n");
    }
    return 0;
}
