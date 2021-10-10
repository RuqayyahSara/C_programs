/* 
Relational operators:  > < >= <= 
Equality operators:  != ==
Logical operators:  || && !

NOTE *-   In Computers, True = 1, False = 0
*/
#include<stdio.h>
int main(){
    // Relational
    printf("%d > %d = %d\n",5,6,5>6);
    printf("%d < %d = %d\n",5,6,5<6);
    printf("%d <= %d = %d\n",5,5,5<=5);
    printf("%d >= %d = %d\n",6,5,6>=5);
    printf("%d == %d = %d\n",5,6,5==6);

    // Equality
    printf("%d != %d = %d\n",5,6,5!=6);
    printf("%d == %d = %d\n",6,6,6==6);

    // Logical
    printf("%d\n",5&&10&&'s');
    printf("%d\n",0 && 12 || 10);   // 1 - logical evaluates from left to right
    printf("%d\n",0 || 12 && 10);
    printf("%d\n",0 && 12 || 0);
    printf("%d\n",0 || 2 || 4 && 0 || 3 && 0);
    printf("%d\n", !2);             // 0 - NOT of truthy will give falsy value 
    printf("%d\n", !0);             // 1 - viceversa

}  




