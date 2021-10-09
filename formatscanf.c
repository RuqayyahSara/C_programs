#include<stdio.h>
int main(){
    int n1,n2, count;
    char c;
    float fl;

    printf("Enter 4 digit number: ");
    scanf("%2d",&n1);
    printf("ENter Number2: ");
    scanf("%5d",&n2);
    printf("\nNumber1: %d \nNumber2: %d\n",n1,n2);
 
/*  i/p - 789 23
    n1 = 78
    n2 = 9 

    i/p - 78923
    n1 = 78
    n2 = 923
*/
    printf("enter input float and a character\n");
    scanf("%f %*c", &fl, &c); // * ignores the character variable and does not store it
    printf("float: %f\nchar: %c\n",fl,c);

// %n is used to count number of characters until the %n specifier is encountered. Eg below:
    printf("Hello%n World\n",&count);
    printf("Count: %d\n",count);
}


