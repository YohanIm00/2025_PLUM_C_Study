/*
Declarations
1)  All variables must be declared before they are used
2)  You have to provide lists of all the variables
    you use in a program and show which data type each variable is
3)  Traditionally, variables must be declared at the beginning of a block
4)  C99 and C11 allow us to place declarations anywhere in a block
    only if we declare a variable before its first usage
*/
#include <stdio.h>

int main()
{
    // some statements
    int doors;
    doors = 5;  // first usage of doors
    // more state ments
    int dogs;
    dogs = 3;   // first usage of dogs
    
    printf("There are %d doors and %d dogs here.", doors, dogs);

    return 0;
}