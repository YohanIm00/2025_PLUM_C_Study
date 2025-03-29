#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char grade;
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
    case 'B':
    case 'C':
    case 'D':
        printf("pass");
        break;
    case 'F':
        printf("fail");
        break;
    default:
        printf("invalid input");
        break;
    }

    return 0;
}