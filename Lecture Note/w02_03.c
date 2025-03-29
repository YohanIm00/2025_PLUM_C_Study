#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", -a);
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%f\n", a / 1.5);
    printf("%d\n", a % b);

    return 0;
}