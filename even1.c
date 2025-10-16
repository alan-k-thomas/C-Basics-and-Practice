//Using while loop generate even numbers upto limit.
#include<stdio.h>
int main()
{
    int i=2, x;
    printf("Enter a limit: \n");
    scanf("%d", &x);
    while(i<=x)
    {
        printf("%d\n", i);
        i=i+2;
    }
    return 0;
}