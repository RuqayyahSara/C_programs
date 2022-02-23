
/* 
Reading input string using 

    1) getch
    2) getchr
    3) getc
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], ch;
    int index = 0;
    //ch = getchar();
    printf("Enter your name: ");
    while (ch != '*')
    {
        ch = getchar();
        s[index] = ch;
        index++;
    }
    index--;
    s[index] = '\0';
    //int n = strlen(s);
    //printf("length : %d\n", n);
    puts(s);
    printf("%s", &s);
    printf("%s", &s[2]);
    printf("%s", s[2]); // wrong - take %c instead
}