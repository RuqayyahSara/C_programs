#include <stdio.h>
void binary(int x);

void main()
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    binary(x);
    printf("\n");
}

void binary(int x)
{

    if (x == 1)
    {
        printf("1");
    }

    else if (x == 0)
    {
        printf("0");
    }

    else
    {
        binary(x / 2);
        printf("%d", x % 2);
    }
}