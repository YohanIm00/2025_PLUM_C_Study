#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    do
    {
        printf("0");
    } while (a == 0);
    
    for (; ;)
        printf("infinity");

    return 0;
}