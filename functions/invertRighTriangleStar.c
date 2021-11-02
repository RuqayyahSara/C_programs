/*
Printing (Inverted Right Triangle star) the below pattern using recursion

* * * * *
* * * *
* * *
* *
*

*/
#include<stdio.h>
void printRow (int);
void printStar (int);

void main(){
    int n;
    printf("Enter no: of rows: ");
    scanf("%d",&n);
    printRow(n);
}

void printRow (int n){
    if (n==0)
    return;
    else{
        printStar(n);
        printf("\n");
        printRow(n-1);
    }
}

void printStar(int j){

if (j==0)
return;

printf("* ");
printStar(j-1);
}