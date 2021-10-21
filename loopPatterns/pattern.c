/* 
Printing the below pattern

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
    int n,k;
    char rhs[50] = "";
    char lhs[50] = "";
    char buffer[50] = "";

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(k=0;k<n;k++){
        if(k==0){
            sprintf(buffer, "%d", 0);
            strcat(lhs,buffer);
            strcat(rhs,"8");
            printf("%s . 9 + %d = %s\n",lhs,n-k-1,rhs);
            strcpy(lhs,"");
        }
        else{
            sprintf(buffer, "%d", (n-k)+1);
            strcat(lhs,buffer);
            strcat(rhs,"8");
            printf("%s . 9 + %d = %s\n",lhs,n-k-1,rhs);
        }
    }
}