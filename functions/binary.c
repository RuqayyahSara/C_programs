#include <stdio.h>
#include<string.h>

// declaration
char* binary(int x);

void main()
{
    int x;
    char* res="";
    printf("Enter x: ");
    scanf("%d", &x);
    // binary(x);
    sprintf(res,"%s",binary(x));
    // printf("Binary of %d = %s\n", x, buffer);
}

//definition - Factorial (recursive approach)
char* binary(int x)
{ 
    char buffer[5]="";

    if (x == 1){
        strcat(buffer,"1");
        return buffer;
    }
    else if (x==0){
        strcat(buffer,"0");
        return buffer;
    }
    else if(x % 2 == 0){
        strcat(buffer,"0");
        binary(x/2);
    }
    else{
        strcat(buffer,"1");
        binary(x/2);
    }
}