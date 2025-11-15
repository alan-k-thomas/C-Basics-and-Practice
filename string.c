#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string\n");
    scanf("%s", str);//& is not used for string
    printf("The string = %s\n", str);
    return 0;
}