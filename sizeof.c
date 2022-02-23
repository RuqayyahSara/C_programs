// sizeof operator

#include<stdio.h>
int main(){
    int n1=15,n2=9;
    long double d = 27617263123.12323;
    // char *s1 ="sdj";
    int add = n1+n2;
    int size =sizeof(char);

    // printf("%ld\n", sizeof(s1));
    // printf("Size of char: %d\n",size); // 1
    // printf("Size of short int: %ld\n",sizeof(short int)); // 2
    // printf("Size of int: %ld\n",sizeof(int)); // 4
    // printf("Size of long int: %ld\n",sizeof(long int)); // 8
    // printf("Size of long long int: %ld\n",sizeof(long long int)); // 8
    printf("Size of long double: %Lf\n",d); // 16
    // printf("Size of the expression, (%d + %d) is %ld\n",n1, n2, sizeof(add)); // 4
}