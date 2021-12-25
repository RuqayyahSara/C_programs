/* 
Write a program to print a spiral under 1000 by incrementing each number twice of the previous number

Eg - 200
o/p = 200 400 800 800 400 200 

Eg - 80
o/p = 80 160 320 640 640 320 160 80 
*/

#include<stdio.h>
#include<string.h>

#define LIMIT 1000

int main(){
    int n,i,sum=0;
    char buffer[10]= "";
    char temp[50] = "";
    char res[50]= "";

    printf("Enter number: ");
    scanf("%d", &n);

    for(i=n;i<LIMIT;i*=2){
        printf("%d ",i);
        sprintf(buffer,"%d ",i);
        strcpy(temp,buffer);
        strcat(temp,res);
        strcpy(res,temp);
    }
    printf("%s\n",res);
}