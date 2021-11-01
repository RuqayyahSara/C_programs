#include <stdio.h>
// declaration
int fact(int x);

void main()
{
    int x, f;
    printf("Enter x: ");
    scanf("%d", &x);
    f = fact(x);
    printf("Factorial of %d = %d\n", x, f);
}

//definition - Factorial (recursive approach)
int fact(int x)
{
    if (x <= 1)
        return 1;
    else
    return x * fact(x-1);
}