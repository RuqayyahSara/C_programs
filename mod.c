/* 
Modulus (%) and division (/) operator working in C
*/
#include<stdio.h>
void main(){
    float c = 21.245;
    int a=9, b=4;
    float res = a/b;
    printf("%d\n",34%56);       // 34 - if a<b, then a%b will always give 'a'
    printf("%d\n", -12%5);      // -2 - sign of resultant is always the sign of the first operand
    // printf("%d\n",5%0);         // throws runtime division by zero error. Cannot divide by 0
    // printf("%d\n",5/0);
    printf("%f\n",(float) 9/4); // 2.250000
    printf("%f\n", res);        // 2.000000 (if we don't typecast like previous line, it converts the int result to float)
    printf("%d\n", 9/-4);       // -2
   // printf("%f\n", c%2);      // throws an error. % does not work on float or double
}