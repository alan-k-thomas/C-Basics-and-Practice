// Creating a program to input student number and marks in any 3 subjects. Finding out the total and average and printing all the details.
#include<stdio.h>
int main()
{
    int stno, mark1, mark2, mark3, total, average;
    printf("Enter your roll number and marks in any 3 subjects: \n");
    scanf("%d %d %d %d", &stno, &mark1, &mark2, &mark3);
    total = mark1 + mark2 + mark3;
    average = total/3;
    printf("Roll no: %d\n", stno);
    printf("Your marks are %d, %d, %d\n", mark1, mark2, mark3);
    printf("Total: %d\n", total);
    printf("Average: %d\n", average);
    return 0;
}