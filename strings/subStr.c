// Time complexity - O(m+n)
// Real Time Scenario - To extract pin code from the tracking number (amazon, flipkart etc..)
#include <stdio.h>
#include <string.h>
void main()
{
    char s[100], sub[50];
    int startPos, endPos, l;
    printf("Enter String: ");
    scanf("%[^\n]", s);
    l = strlen(s);
    printf("Enter the start position: ");
    scanf("%d", &startPos);
     printf("Enter the end position: ");
    scanf("%d", &endPos);
    int i = 0;
    int start = l - startPos;
    int end = l - endPos;
    while (startPos < endPos)
    {
        sub[i] = s[startPos];
        i++;
        startPos++;
    }
    printf("Substring = %s\n", sub);
}