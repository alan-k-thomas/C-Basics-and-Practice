//copy one string to another
//Create a program to find number of vowels of a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, count = 0, length;

    printf("Enter a string\n");
    scanf("%s", str);
    length = strlen(str);

    //Counting
    for(i = 0; i<=length; i++)
    {
        if(str[i] == 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' ||str[i]== 'u' ||str[i]== 'A' ||str[i]== 'E' ||str[i]== 'I' ||str[i]== 'O' ||str[i]== 'U')
        {
            count++;
        }
    }
    printf("Number of vowels: %d\n", count);
    return 0;
}