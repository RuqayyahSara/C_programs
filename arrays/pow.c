#include <stdio.h>
#include <math.h>
long long unsigned int power(int m, int n);

long long unsigned int power(int m, int n)
{
    if (n < 1)
        return 1;

    return m * power(m, n - 1);
    // long long unsigned result = 1;

    // for (int i = 1; i <= n; i++)
    //     result *= m;
    // return result;
}

int main()
{
    // printf("%ld\n", sizeof(long long int));
    printf("%llu\n", power(2, 64) - 1);
    // printf("%f\n", pow(2, 64);
    long long unsigned int op = 0;
    for (long long int i = 1; i <= power(2, 30); i++)
    {
        printf("%llu\t", op++);
    }
}
