#include<stdio.h>

/**
 * main - prints size of various types
 * Return: zero
 */

int main(void)
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of an int: %zu byte(s)\n", sizeof(intType));
    printf("Size of float: %zu byte(s)\n", sizeof(floatType));
    printf("Size of double: %zu byte(s)\n", sizeof(doubleType));
    printf("Size of a char: %zu byte\n", sizeof(charType));
    
    return 0;
}
