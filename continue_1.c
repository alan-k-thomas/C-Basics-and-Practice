//Write a while loop that brings odd number from 1 to 10. If the value of i becomes equal to 5, skip the iteration. 
#include<stdio.h>
int main()
{
    int i = 1;
    while(i <= 10)
    {
        printf("%d\n", i);
        i += 2;
        if(i == 5)
        {
            continue;
        }
    }
    return 0;
}