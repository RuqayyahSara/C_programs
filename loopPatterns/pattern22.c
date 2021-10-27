/* 
Printing the below pattern using Standard String functions

1 x 1 = 1
11 x 11 = 121
111 x 111 = 12321
1111 x 1111 = 1234321
11111 x 11111 = 123454321

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int n,i,j;
    char rhs[50] = "";
    char rhs1[50] = "";
    char lhs[50] = "";
    char b[50] = "";
    char buffer[50] = "";
    char buffer1[50] = "";

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        strcat(lhs,"1");
        sprintf(buffer,"%d",i+1);
        sprintf(buffer1,"%d",i);
        strcat(rhs,buffer);

        if(i==0)
        strcpy(rhs1,"");
        else
        strcpy(rhs1,buffer1);

        strcat(rhs1,b);
        strcpy(b,rhs1);
        printf("%s x %s = %s%s\n",lhs,lhs,rhs,rhs1);
    }
}