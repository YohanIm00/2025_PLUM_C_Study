#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool a = true, b = false;

    printf("%d\n", !a);     // 논리 부정(NOT) 연산
    printf("%d\n", a || b); // 논리 합(OR) 연산
    printf("%d\n", a && b); // 논리 곱(AND) 연산
}