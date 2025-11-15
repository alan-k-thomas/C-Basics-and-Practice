//Write a program to print the length of a string(without using strlen)
#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter the string\n");
    scanf("%s", str);
    int i;
    for(i = 0; str[i] != '\0'; i++ )
    {
        //incrementing i value
    }
    printf("The length of the string = %d\n", i);
    return 0;
}