// Operation - String Insertion
// Time complexity - O(m+n)
// how youdoing
// pos = 4
#include <stdio.h>
#include <string.h>
void main()
{
    char s[100], sub[50];
    int pos;
    printf("Enter String: ");
    scanf("%[^\n]", s);
    printf("Enter the substring to be inserted: ");
    scanf("%s", sub);
    int l1 = strlen(s);
    int l2 = strlen(sub);
    printf("Enter the position to be inserted: ");
    scanf("%d", &pos);

    int i = l1 - 1;
    int k = 0;
    int j = pos;
    while (i >= pos)
    {
        s[i + l2] = s[i];
        i--;
    }
    while (k < l2)
    {
        s[j] = sub[k];
        k++;
        j++;
    }
    printf("String after insertion = %s\n", s);
}