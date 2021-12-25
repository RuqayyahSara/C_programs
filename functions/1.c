#include <stdio.h>
// declaration
int fun(int n);

void main()
{
    printf("%d", fun(99));
}

//definition - Factorial (recursive approach)
int fun(int n)
{
    if (n>100)
        return n-10;
    else
    return fun(fun(n+11));
}