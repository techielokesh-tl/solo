#include <stdio.h>

/*
    symbolic constants
    the #define method
*/

#define PIE 3.14159

int main()
{
    /*
        using the const
        keyword method
    */

    const float pie = 3.14159;

    printf("PIE : %f\n", PIE);
    printf("pie : %f\n", pie);

    return 0;
}