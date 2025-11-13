//Write a while loop that prints all the even number from 1 to 10. Break the loop when the value of i become equal to 6.

#include<stdio.h>
int main()
{
    int i = 2;
    while(i <= 10)
    {
        if(i%2 == 0)
        {
            if(i == 6)
            {
                break;
            }
        printf("%d\n", i);  
        i += 2;  
        }
    }
    return 0;
}