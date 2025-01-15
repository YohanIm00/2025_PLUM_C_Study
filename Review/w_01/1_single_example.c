#include <stdio.h>
/*
-   Include the information found in "stdio.h," which is 
    a standard part of all C compiler packages.
-   Here, "stdio.h" provides support for keyboard input
    and for displaying output.
*/
int main(void)
/*
-   C programs consist of one or more functions.
-   This program contains only one function called "main."
-   Here, main() doesn't take any arguments and returns integer value.
*/  // And these are comments, they are ignored by compiler.
{   // {} Braces enclose the body of function
    int num;    // define an integer variable called num
    num = 1;    // assign a value to num

    printf("I am a simple ");   // use the printf() function in stdio.h library
    printf("computer.\n");
    // \n -> Moves the cursor to the beginning of the next line.
    printf("My favorite number is %d because it is first.\n", num);
    /*
    -   It displays the phrase with the value of num.
    -   "%d" is replaced by the value of num.
    */

    return 0;
    /*
    -   A C function can provide a number to the agency that called it.
    */
}