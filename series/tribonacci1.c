void series(int a, int b, int c, int sum);

#include<stdio.h>

int main(){
    printf("1  3  ");
    series(0,1,3,4);
}

void series(int a, int b, int c, int sum){
    if (sum > 5000)
    return;

    printf("%d  ",sum);
    series(b,c,sum,b+c+sum);
}