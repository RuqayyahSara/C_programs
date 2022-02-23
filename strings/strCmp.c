// Operation 6 : String comparison

#include <stdio.h>
#include <string.h>

void main()
{
    char s1[100], s2[100];
    int i = 0, j = 0, l1 = 0, l2 = 0;
    printf("Enter string 1: ");
    scanf("%[^\n]", s1);
    printf("Enter string 2: ");
    scanf(" %[^\n]", s2);
    l1 = strlen(s1);
    l2 = strlen(s2);
    printf("Length of s1 = %d\nLength of s2 = %d\n", l1, l2);
    if (l1 == l2)
    {
        while (i < l1)
        {
            if (s1[i] == s2[i])
                i++;
            else
            {
                if (s1[i] < s2[i])
                {
                    printf("s1 is less than s2\n");
                    break;
                }
                else
                {
                    printf("s2 is less than s1\n");
                    break;
                }
            }
        }
        if (i == l1)
            printf("strings are equal\n");
    }
    else
        printf("strings not equal\n");
}