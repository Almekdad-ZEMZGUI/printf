#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len, len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    len = _printf("%%");
    len2 = printf("%%");
    printf("%d\n%d", len, len2);

    printf("\n");
    _printf("Empty string: %s\n", "");
    _printf("String with spaces: %s\n", "Hello World");
    _printf("Percent at the end: 42%%\n");
    _printf("Hello, %s!\n", "world");
    _printf("Character: %c\n", 'A');
   _printf("Percentage: %%\n");


    _printf("%");
    _printf("% "); 
    _printf("%c %"); 
    _printf("%s %", "hello");
    

    return (0);
}
