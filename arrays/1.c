// studying array behaviour
#include<stdio.h>
void main(){
    int mat2[1];
    mat2[0] = 0;
    // mat2[1] = 1;
    mat2[2] = 2;
    mat2[3] = 3;
    for(int i=0; i<14; i++)
    printf("%d\n",mat2[i]);
}