/* 
Printing the below pattern using 2 methods

1 x 8 + 1 = 9
12 x 8 + 2 = 98
123 x 8 + 3 = 987
1234 x 8 + 4 = 9876
12345 x 8 + 5 = 98765
123456 x 8 + 6 = 987654
1234567 x 8 + 7 = 9876543
12345678 x 8 + 8 = 98765432
123456789 x 8 + 9 = 987654321

METHOD 1 - Using nested loops
*/

#include<stdio.h>
#include<string.h>

int main(){
    int n,i,j,k;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        printf(" x 8 + %d = ",i);
        for(k=n; k>(n-i); k--){
            printf("%d",k);
        }
        printf("\n");
    } 
}