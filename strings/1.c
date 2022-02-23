
/* 
Reading input string using 

    1) scanf
    2) gets
    3) fgets
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    printf("Enter your name: ");
    // scanf("%s", s);
    // gets(s);
    fgets(s,10,stdin);
    printf("Testing the string: %s\n", s);
}