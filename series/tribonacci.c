#include<stdio.h>

int main(){
    int a=0,b=1,c=3,sum=4;
    
    printf("%d  %d  ",b,c);
    for(int i=1; sum<=5000; i++){
        printf("%d  ",sum);
        a=b;
        b=c;
        c=sum;
        sum = a+b+c;
    }
    printf("\n");
}