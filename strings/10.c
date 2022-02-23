#include <stdio.h>
void main()
{
    printf("#include<stdio.h>\n");
    printf("void main(){\n");
    for (int i = 1; i <= 100; i++)
    {
        printf("\tprintf(\"Hello World\\n\");\n");
    }
    printf("}\n");
}