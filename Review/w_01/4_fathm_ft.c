// fathm_ft.c -- converts 2 fathoms to feet
/*
Documentation
:   The program begins with a comment identifying the file name and
    the purpose of the program
    -   This is helpful later when you browse through several files
        or print them
*/

#include <stdio.h>
int main()
{
    int feet, fathoms;  // Multiple Declarations
    /*
    Multiple Declarations
    :   The program declares two variables instead of just one
        in a single declaration statement
    */

    fathoms = 2;
    feet = 6 * fathoms; // Multiplication
    /*
    Multiplication
    :   The program makes a calculation as a basic numerical operation
    :   In C, "*" is the symbol for multiplication
    */
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);    // Printing multiple values
    /*
    Printing Values
    :   if there are multiple substitutions, we can print two or more
        values of each variable. Compiler will handle it procedurally
    :   The result of expression can be printed as well
    */
    printf("Yes, I said %d feet!\n", 6 * fathoms);

    return 0;
}