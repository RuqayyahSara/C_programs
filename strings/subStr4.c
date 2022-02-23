// Operation - Extracing from the middle of the string. Start position and n characters from there
// Time complexity - O(m+n)
// Real Time Scenario - To extract pin code from the tracking number (amazon, flipkart etc..)
#include <stdio.h>
#include <string.h>
void main()
{
    char s[100], sub[50];
    int startPos, n, l;
    printf("Enter String: ");
    scanf("%[^\n]", s);
    printf("Enter the start position: ");
    scanf("%d", &startPos);
    printf("Enter the number of characters to be extracted: ");
    scanf("%d", &n);
    int i = 0;
    int end = startPos + n;
    while (startPos < end)
    {
        sub[i] = s[startPos];
        i++;
        startPos++;
    }
    printf("Substring = %s\n", sub);
}