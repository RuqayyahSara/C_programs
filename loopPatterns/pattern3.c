/* 
Printing the below pattern by optimizing first solution by merging two inner loops

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
    char lhs[100] = "";
    char rhs[100] = "";
    char buffer[100] = "";

    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    for(i=10;i>1;i--){

        if(i==10){
            printf("0. 9 + 8 = 8\n");
            count++;  
        }
        else {
        for(j=9; j>=i; j--){
            sprintf(buffer,"%d",j);
            strcat(lhs,buffer);
            if(j==9)
            strcat(rhs,"88");
            else
            strcat(rhs,"8");
        }
        printf("%s . 9 + %d = %s\n",lhs,i-2,rhs);
        strcpy(lhs,"");
        strcpy(rhs,"");
        count++;
        }
    } 
    printf("The no:of printf operations = %d\n",count);
}