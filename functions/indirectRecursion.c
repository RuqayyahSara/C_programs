#include<stdio.h>

int f1 (int);
int f2 (int);

void main(){
    int n,a;
    printf("Enter n: ");
    scanf("%d",&n);
    a = f1(n);
    printf("%d\n",a);
}

int f1 (int n){
    if(n<=1)
    return 1;

    return f2(n-1);
}

int f2 (int n){
    return n+f1(n-1);
}