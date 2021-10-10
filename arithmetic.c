/* 
Arithmetic operation and typecasting
*/
#include<stdio.h>
void main (){
   float a,b;
    printf("Enter Integer: ");
    scanf("%f", &a);
    printf("Enter Floating point: ");
    scanf("%f", &b);
    printf("%d",(int)(a+b));

// Below method gives the same answer as the above one

    // float a,b;
    // printf("Enter Integer: ");
    // scanf("%f", &a);
    // printf("Enter Floating point: ");
    // scanf("%f", &b);
    // int result = a+b;
    // printf("%d",result);
}

    