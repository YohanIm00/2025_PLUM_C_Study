#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    printf("--- while ---\n");
    while (a > 0)
        printf("%d\n", a--);
    printf("------\n\n");

    scanf("%d", &a);
    printf("--- do while ---\n");
    do
    {
        printf("%d\n", a--);
    } while (a > 0);
    printf("------\n\n");    

    return 0;
}