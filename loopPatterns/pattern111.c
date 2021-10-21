/* 
Printing the below pattern using nested loops

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
    int n,i,j,k,count=0;
    char lhs[100] = "";
    char lhs1[100] = "";
    long int op1,op2,op=1;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for(i=0;i<n;i++){

        for(j=0; j<i+1; j++){
            strcat(lhs,"1");
            printf("1");
            count++;
        }
        op1 = atoi(lhs);  
        printf(" . ");
        count++;

        for(k=0; k<i+1; k++){
            strcat(lhs1,"8");
            printf("8");
            count++;
        }
        op2 = atoi(lhs1);
        op = op1*op2;
        strcpy(lhs,"");
        strcpy(lhs1,"");
        printf(" = ");
        count++;

        printf("%ld\n",op);
        count++;
    } 
    printf("The no:of printf operations = %d\n",count);
}