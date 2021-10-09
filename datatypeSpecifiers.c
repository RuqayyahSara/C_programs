/* 
Format specifiers of all data types. 
*/

#include<stdio.h>
void main(){
    char c = 'k';
    char* str = "heyy";
    int n1 = -2000;
    unsigned int n2 = 322;
    long int n3 = 6772829;
    long long int n4 = 827272828282;
    float n5 = 12.65;
    double n6 = 45262728990767.23;
    int hex = 0x72;
    int oct = 0162;

    printf("char: %c\n",c);
    printf("String: %s\n",str);
    printf("integer: %d\n", n1); // %i can also be used
    printf("unsigned integer: %u\n", n2);
    printf("long integer: %ld\n", n3);
    printf("long long integer: %lld\n", n4);
    printf("floating point: %f\n", n5);
    printf("double: %lf\n", n6);
    printf("Another format for double: %e\n", n6); // %E can also be used
    printf("Address of n1 %p\n", &n1);
    printf("Octal: %o\n", oct);
    printf("Hexadecimal: %x\n", hex);
}