//To print the reverse of a string
#include<stdio.h>
int main()
{
    char str[30];
    int i;

    printf("Enter a string\n");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        //length counting loop
    }

    //Reversing
    int j;
    printf("Reverse\n");
    for(j = i-1; j >= 0; j--)
    {
        printf("%c\n", str[j]); //char
    }
    return 0;
}