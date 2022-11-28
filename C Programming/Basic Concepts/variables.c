#include <stdio.h>

/*
    variables of different types.
*/

int main()
{
    // integer type
    int num = 42;

    // char type
    char letter = 'C';

    // float type
    float pie = 3.14;

    /*
        planck's constant
        using type double
    */
    double PC = 6.62607015;

    /*
        printing all types
        using format %type
    */
    
    printf("number: %i\n", num);
    printf("letter: %c\n", letter);

    printf("value of pie 22/7: %.2f\n", pie);
    printf("planck's constant: %lf\n", PC);
    return 0;
}