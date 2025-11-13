//Find out diagonals elements (3x3 matrix)
#include<stdio.h>
int main()
{
    int mat [3][3], i, j;
    printf("Enter a matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Matrix \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("Diagonal elements \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i == j)
            {
                printf("%d\t", mat[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}