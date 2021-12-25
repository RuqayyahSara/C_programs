/*
Write log base 2 values of given input
*/

#include<stdio.h>

int main(){
    int n,i,sum=0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i=n;i>1;i/=2){
        sum+=1;
    }
    printf("%d\n",sum);
}