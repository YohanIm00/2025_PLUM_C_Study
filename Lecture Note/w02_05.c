#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (a < 5)
        printf("a is smaller than 5.\n");
    else if (a > 5)
        printf("a is bigger than 5.\n");
    else
        printf("a is 5.\n");

    return 0;
}