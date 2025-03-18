#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int fav;
    printf("What is your favorite number?\n");
    scanf("%d", &fav);
    printf("Got it. your favorite number is %d, right?\n", fav);

    return 0;
}