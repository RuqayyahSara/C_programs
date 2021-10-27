/*
Print even-odd series - 100 operations
*/

#include<stdio.h>
#include<string.h>

void main(){
    int count=0;
     char even[150] = "";
     char buffer[50] = "";
    printf("Odd numbers\n");
    for(int i=1;i<=100;i++){
        if(i%2 == 1){
        printf("%d\t",i);
        count++;
        }
        else{
            sprintf(buffer,"%d\t",i);
            strcat(even,buffer);
        }
    }
    printf("\nEven Numbers\n%s\n",even);
    count++;
    printf("Total no: of count operations: %d\n",count);
}