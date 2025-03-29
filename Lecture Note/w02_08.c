#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; ++i)
    {
        if (i > 100)
            break;
        if (i % 3 == 0)
            continue;
        
        printf("%d ", i);
    }    

    return 0;
}