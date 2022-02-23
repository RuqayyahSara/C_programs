#include <stdio.h>
void main()
{
    //char s = "cs.code.in 2021"; // we get segmentation fault since size is not defined
    char s[] = "cs.code.in 2021";
    printf("%-15s\n", s);
    printf("%15s\n", s);
    // printf("%.5s\n", s);
    // printf("%5.5s\n", s);
    // printf("%10.5s\n", s);
    // printf("%s\n", &s);
    printf("\n %*.*s", 10, 2, s);
}