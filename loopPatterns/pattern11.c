/* 
Printing the below pattern using nested loops

1 x 1 = 1
11 x 11 = 121
111 x 111 = 12321
1111 x 1111 = 1234321
11111 x 11111 = 123454321

*/

#include<stdio.h>

int main(){
    int n,i,j,k,temp=1,count=0;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("1");
            count++;
        }
        printf(" x ");
        count++;
        for(j=1;j<=i;j++){
            printf("1");
            count++;
        }
        printf(" = ");
        for(k=1;k<=i;k++){
            printf("%d",k);
            count++;
        }
         for(k=i-1;k>=1;k--){
            printf("%d",k);
            count++;
        }
        printf("\n");
        count++;
    }
    printf("The no:of printf operations = %d\n",count);
}