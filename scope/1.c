#include<stdio.h>

void main(){
    int a;
    printf("Outside the block: %d\n",a);

    for(int a=100; a>=90; a--)
    printf("Inside the block: %d\n",a);

    printf("Outside the block: %d\n",a);
}