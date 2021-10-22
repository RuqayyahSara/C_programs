/* 
Printing the below pattern using STandard String

1 . 8 = 8
11 . 88 = 968
111 . 888 = 98568
1111 . 8888 = 9874568
11111 . 88888 = 987634568
111111 . 888888 = 98765234568
1111111 . 8888888 = 9876541234568

*/

#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){
    int n,i;
    char lhs[100] = "";
    char lhs1[100] = "";
    long int op1,op2,op=1;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for(i=0;i<n;i++){

        strcat(lhs,"1");
        op1 = atoi(lhs);  
        strcat(lhs1,"8");
        op2 = atoi(lhs1);
        op = op1*op2;

        printf("%s . %s = %ld\n",lhs,lhs1,op);
    } 
}