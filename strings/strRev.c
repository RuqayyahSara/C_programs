// Operation 6 : String comparison

#include <stdio.h>
#include <string.h>

void main()
{
    char s1[100];
    char temp;
    printf("Enter string 1: ");
    scanf("%[^\n]", s1);
    int len = strlen(s1);
    int j = len - 1;
    printf("%d\n", j);
    for (int i = 0; j > i; i++)
    {
        temp = s1[j];
        s1[i] = s1[j];
        s1[j] = temp;
        j--;
    }
    printf("%s\n", s1);
}