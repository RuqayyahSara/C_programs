#include <stdio.h>
// declaration
char *numberType(int x);
int fact(int x);

//definition - numberType
char *numberType(int x)
{
    if (x == 0)
        return "Neither positive nor negative";

    else if (x > 0)
        return "Positive Number";

    else
        return "Negative Number";
}

//definition - Factorial (iterative approach)
int fact(int x)
{
    if (x <= 0)
        return 0;

    else
    {
        int f = 1;
        for (int i = 1; i <= x; i++)
        {
            f = f * i;
        }
        return f;
    }
}

void main()
{
    int x, f;
    printf("Enter x: ");
    scanf("%d", &x);
    f = fact(x);
    printf("%d is %s\n", x, numberType(x));
    printf("Factorial of %d = %d\n", x, f);
}