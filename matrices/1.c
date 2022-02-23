// Multiplication of 2 matrices

#include <stdio.h>
void main()
{
    int mat1[50][50], mat2[50][50], output[50][50];
    int r1, c1, r2, c2;
    printf("Enter the Matrix 1 Order : ");
    scanf("%d %d", &r1, &c1);
    printf("\nEnter the Matrix 2 Order : ");
    scanf("%d %d", &r2, &c2);
    //Verify if the multiplication of this matrix is possible
    if (c1 == r2)
    {
        //Take the input matrix 1
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("Enter MAT1[%d][%d] : ", i, j);
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("\n\n");
        //Take the input matrix 2
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("Enter MAT2[%d][%d] : ", i, j);
                scanf("%d", &mat2[i][j]);
            }
        }
        //Display Matrix 1
        printf("\nThe Matrix 1 is : \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d  ", mat1[i][j]);
            }
            printf("\n");
        }
        //Display Matrix 2
        printf("\nThe Matrix 2 is : \n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d  ", mat2[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nThe Matrix Multiplication is not possible with the given order.\n");
    }
}