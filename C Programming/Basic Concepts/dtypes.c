#include <stdio.h>

/*
    Program tells the size of differt types in C
    sizeof() returns the size of memory in bytes
*/

int main()
{
    printf("int: %ld bytes\n", sizeof(int));
    printf("char: %ld byte \n", sizeof(char));
    printf("float: %ld bytes \n", sizeof(float));
    printf("double: %ld bytes \n", sizeof(double));
    return 0;
}