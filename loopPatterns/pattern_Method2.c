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

METHOD 2 - Using string.h standard functions.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n,i,k;
    char temp[50] = "";
    char temp1[50] = "";
    char buffer[50] = "";

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // for(i=1, k=n; i<=n; i++, k--){
    //     sprintf(buffer,"%d", i);
    //     strcat(temp,buffer);
    //     strcat(temp," x 8 + ");
    //     sprintf(buffer,"%d", i);
    //     strcat(temp,buffer);
    //     strcat(temp," = ");
    //     sprintf(buffer,"%d", k);
    //     strcat(temp1,buffer);
    //     strcat(temp,temp1);
    //     printf("%s\n",temp);
    //     strcpy(&temp[i],&temp[strlen(temp)]);
    // }   

    // Optimizing the above solution

    for(i=1, k=n; i<=n; i++, k--){
        sprintf(buffer, "%d", i);
        strcat(temp,buffer);
        sprintf(buffer, "%d", k);
        strcat(temp1,buffer);
        printf("%s x 8 + %d = %s\n",temp,i,temp1);
    }
}