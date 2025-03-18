#include <stdio.h>

int main()
{
    int a, b;
    a = 1;
    b = 2;
    
    char tap = '\t';

    printf("We'll calculate A + A\bB.\n");
    printf("\nA's value is \t\'%d\'.\n", a);
    printf("B's value is \t\'%d\'.\n", b);
    printf("The result is %c\'%d\'.\n", tap, a + b);
    printf("\n%s done!\n", "Well");

    return 0;
}