// Operation 6 : String comparison

#include <stdio.h>
#include <string.h>

void main()
{
    char s1[100], s2[100];
    int res = 0, l1 = 0, l2 = 0;
    printf("Enter string 1: ");
    scanf("%[^\n]", s1);
    printf("Enter string 2: ");
    scanf(" %[^\n]", s2);
    l1 = strlen(s1);
    l2 = strlen(s2);
    printf("Length of s1 = %d\nLength of s2 = %d\n", l1, l2);

    res = strcmp(s1, s2);
    if (res == 0)
        printf("Both strings are equal\n");
    else if (res < 0)
        printf("s1 is less than s2");
    else
        printf("s1 is greater than s2");
}