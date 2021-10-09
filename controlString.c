/* 
Control strings - flag, width, precision and specifiers
*/

#include<stdio.h>
void main(){
    char* s = "Hi Sara";
    int n1 = 288;
    float n5 = 12.6785;
    int hex = 0x72;
    int oct = 0162;

    printf("%5d %10f\n",n1,n5);  // specifies width i.e min mo: of 10 digits can be printed. if digits are less than 10, padded w white spaces
    printf("%05d %010f\n",n1,n5);// specifies flag 0. Pads zero instead of white spaces
    printf("%010.3f\n",n5);      // specifies precision - pads with zeroes and prints 3 digits after decimal point
    printf("%-5d\n",n1);         // specifies '-' flag which justifies left. Cannot be used with '0' flag
    printf("%-+8.2f\n", n5);     // +12.68 
    printf("%+8.2f\n", n5);      //   +12.68
    printf("%+10.2e\n", n5);     //  +1.27e+01
    printf("%#o\n",oct);         // 0162 - '#' flag prints o/p in octal notation

    printf("%7s\n",s);
    printf("%.5s\n",s);          // prints only first 5 characters
    printf("%.s\n",s);           // prints nothing
    printf("%-10.5s\n",s);   

    // width and precision can also be passed as arguments
    printf("%*.*f\n",8,2,342.3456); // width - 8 ; precision - 2     
}

// execute the above code and compare o/p's to understand control string better