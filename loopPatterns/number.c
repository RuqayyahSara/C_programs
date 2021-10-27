/*
Print the below pattern
5
45
345
2345
12345
*/
#include<stdio.h>
#include<string.h>

int main(){
    int n,i,j,count=0;
    char a[50] = "";
    char b[50] = "";
    char buffer[50] = "";

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i=n;i>=1;i--){
        sprintf(buffer,"%d",i);
        // strcat(a,buffer);
        strcpy(a,buffer);
        strcat(a,b);
        strcpy(b,a);
        printf("%s\n",a);
  }
    }
