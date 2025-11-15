//To find the length of a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i;
    printf("Enter a string\n");
    scanf("%s", str);
    i = strlen(str);
    printf("The length of string is %d\n", i);
    return 0;
}