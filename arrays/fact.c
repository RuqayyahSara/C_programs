#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #include <unistd.h>

int main()
{
    double time_spent = 0.0;
    clock_t begin = clock();

    time_t t;
    srand((unsigned)time(&t));

    int a[100];
    int aux;
    for (int i = 0; i < 100; i++)
    {
        a[i] = rand() % 10;
    }

    for (int i = 0; i < 100; i++)
    {
        aux = 1;
        for (int j = a[i]; j >= 1; j--)
        {
            aux *= j;
        }
        printf("Factorial of %d = %d\n", a[i], aux);
        // sleep(1);
    }
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
     printf("The elapsed time during above factorial logic: %f sec\n", time_spent  );
}

// 0.007106 sec with sleep(1)