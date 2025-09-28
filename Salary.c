//Create a program to input employee number and basic pay. Calculate and print the follwing.
#include<stdio.h>
int main()
{
    int empid, bp, hra, da, ta, pf, np;
    printf("Enter your employee number: \n");
    scanf("%d", &empid);
    printf("Enter your basic pay: \n");
    scanf("%d", &bp);
    hra = bp * 13/100;
    da = bp * 4/100;
    ta = bp * 7/100;
    pf = bp * 12/100;
    np = hra + bp + da + ta - pf;
    printf("Employee number: %d \n" , empid);
    printf("Your basic pay is %d \n", bp);
    printf("HRA: %d \n", hra);
    printf("DA: %d \n", da);
    printf("TA: %d \n", ta);
    printf("PF: %d \n", pf);
    printf("Net pay: %d \n", np);
    return 0;
}