#include <stdio.h>

int main()
{
    float a = 7.5;
    int b = (int)a;
    
    printf("%d\n", b++);
    printf("%d\n", b);
    printf("%d\n", ++b);
    
    b *= 2;
    printf("%d\n", b);
    
    return 0;
}