/* 
Printing (Right Triangle star) the below pattern using while loop

*
* *
* * *
* * * *
* * * * *

*/
#include<stdio.h>
void main(){
    int i,j,n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    i=1;
    while(i<=n){
        j = 1;
        while(j <= i){
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
}