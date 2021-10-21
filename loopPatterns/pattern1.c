/* 
Printing the below pattern using nested loops

0 . 9 + 8 = 8
9 . 9 + 7 = 88
98 . 9 + 6 = 888
987 . 9 + 5 = 8888
9876 . 9 + 4 = 88888
98765 . 9 + 3 = 888888
987654 . 9 + 2 = 8888888
9876543 . 9 + 1 = 88888888
98765432 . 9 + 0 = 888888888

*/

#include<stdio.h>
#include<string.h>

int main(){
    int n,i,j,k,count=0;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for(i=0;i<n;i++){

        if(i==0){
            printf("0");
            count++;  
        }
        else {
        for(j=n; j>n-i; j--){
            printf("%d",j);
            count++;
        }
      }
        printf(" . 9 + %d = ",n-i-1);
        count++;
        for(k=0; k<i+1; k++){
            printf("8");
            count++;
        }
        printf("\n");
        count++;
    } 
    printf("The no:of printf operations = %d\n",count);
}