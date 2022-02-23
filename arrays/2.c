/* 
Build a CLI menu to decide the given matrix type
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, op, n, row, col, flag = 1;
    int a[100], b[100][100];
    printf("---------------Find Matrix Type\n---------------");
    while (1)
    {
        printf("Select Option\n1. Row Matrix\n2. Column Matrix\n3. Test Zero Matrix\n4. Singleton Matrix\n5. Test Square Matrix\n6. Test Horizontal Matrix\n7. Test Vertical Matrix\n8. Diagonal Matrix\n9. Scalar Matrix\n 10. Exit\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Enter the number of elements: ");
            scanf("%d", &n);

            for (i = 0; i < n; i++)
            {
                printf("Enter A[1][%d]: ", i + 1);
                scanf("%d", &a[i]);
            }
            printf("The Row Matrix is: \n[ ");
            for (i = 0; i < n; i++)
                printf("%d  ", a[i]);
            printf("]\n\n");
            break;

        case 2:
            printf("Enter the number of elements: ");
            scanf("%d", &n);

            for (i = 0; i < n; i++)
            {
                printf("Enter A[%d][1]: ", i + 1);
                scanf("%d", &a[i]);
            }
            printf("The Column Matrix is:\n[ ");
            for (i = 0; i < n; i++)
                printf("%d\n", a[i]);
            printf("]\n\n");
            break;

        case 3:
            printf("Enter the number of rows and columns: ");
            scanf("%d %d", &row, &col);

            printf("Enter elements: ");
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col; j++)
                    scanf("%d", &b[i][j]);
            }
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col; j++)
                {
                    if (b[i][j] != 0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if (flag == 0)
                printf("Not a Null Matrix\n\n");
            else
                printf("Null Matrix\n\n");
            break;

        case 4:
            printf("Enter input element: ");
            scanf("%d", &n);
            printf("[ %d ]\n\n", n);
            break;

        case 5:
            printf("Enter the number of rows and columns: ");
            scanf("%d %d", &row, &col);
            if (row == col)
                printf("Square Matrix\n\n");
            else
                printf("Not a square Matrix\n\n");
            break;

        case 6:
            printf("Enter the number of rows and columns: ");
            scanf("%d %d", &row, &col);
            if (row < col)
                printf("Horizontal Matrix\n\n");
            else
                printf("Not a horizontal Matrix\n\n");
            break;

        case 7:
            printf("Enter the number of rows and columns: ");
            scanf("%d %d", &row, &col);
            if (row > col)
                printf("Vertical Matrix\n\n");
            else
                printf("Not a vertical Matrix\n\n");
            break;

        case 8:
            printf("Enter the number of rows and columns: ");
            scanf("%d %d", &row, &col);
            flag = 1;
            if (row == col)
            {
                for (i = 0; i < row; i++)
                {
                    for (j = 0; j < col; j++)
                        scanf("%d", &b[i][j]);
                }

                for (i = 0; i < row; i++)
                {
                    for (j = 0; j < col; j++)
                    {
                        if (i != j && b[i][j] != 0)
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
            }
            else
                flag = 0;

            if (flag == 0)
                printf("Not a Diagonal Matrix\n\n");
            else
                printf("Diagonal Matrix\n\n");
            break;

        case 9:
            printf("Enter the number of rows and columns: ");
            scanf("%d %d", &row, &col);
            flag = 1;
            if (row == col)
            {
                for (i = 0; i < row; i++)
                {
                    for (j = 0; j < col; j++)
                        scanf("%d", &b[i][j]);
                }

                for (i = 0; i < row; i++)
                {
                    for (j = 0; j < col; j++)
                    {
                        if (i != j && b[i][j] != 0)
                        {
                            flag = 0;
                            break;
                        }
                        if(i==j && b[i][j])
                    }
                }
            }
            else
                flag = 0;

            if (flag == 0)
                printf("Not a Diagonal Matrix\n\n");
            else
                printf("Diagonal Matrix\n\n");
            break;


        default:
            exit(0);
        }
    }
}