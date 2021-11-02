/*
Printing (Right Triangle Number) the below pattern using recursion

1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

*/
#include<stdio.h>
void printRow (int, int);
void printStar (int, int);

void main(){
    int n;
    printf("Enter no: of rows: ");
    scanf("%d",&n);
    printRow(n,1);
}

void printRow (int n, int i){
    if (n==0)
    return;
    else{
        printStar(i,i);
        printf("\n");
        printRow(n-1, i+1);
    }
}

void printStar(int j, int k){

if (j==0)
return;

printf("%d ",k);
printStar(j-1,k);
}