
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
    int index=0;
    printf("Enter your name: ");
    do{
        // scanf("%c", &ch);
        ch = getchar();
        s[index] = ch;
        index++;  
    }while(ch != '\n');
    index--;
    s[index]= '\0';
    printf("Testing the string: ");
    puts(s);
}