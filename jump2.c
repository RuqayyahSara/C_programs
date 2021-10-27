/*
Print even-odd series - 50 operations
*/

#include <stdio.h>
#include <string.h>

void main()
{
    int count = 0;
    char even[150] = "";
    char buffer[50] = "";
    printf("Odd numbers\n");
    for (int i = 1; i <= 50; i++)
    {
            sprintf(buffer, "%d\t", i * 2);
            strcat(even, buffer);
            printf("%d\t", i * 2 - 1);
            count++;
    }
    printf("\nEven Numbers\n%s\n", even);
    count++;
    printf("Total no: of count operations: %d\n", count);
}