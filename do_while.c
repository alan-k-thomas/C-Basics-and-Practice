//Create a program to print 1 to 5 using do while. Exit control loop
#include<stdio.h>
int main()
{
    int i = 1;

    do
    {
        printf("%d\n", i);
        i++;
    }
    while(i <= 5);

    return 0;
}