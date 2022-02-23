#include<stdio.h>

void fun(){
    static int y = 4;
    printf("Value of x in fun() : %d\n",y);
    y++;
}

int main(){
    int x =10;
    fun();
    fun();
    printf("Value of x in main(): %d\n",x);
    return 0;
}