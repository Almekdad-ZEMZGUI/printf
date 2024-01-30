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
        _printf("Character:[%c]\n", 'H');
        printf("Character:[%c]\n", 'H');
         _printf("String:[%s]\n", "I am a string !");
        printf("String:[%s]\n", "I am a string !");
        len = _printf("Percent:[%%]\n");
        len2 = printf("Percent:[%%]\n");
        _printf("Unknown:[%r]\n");
        printf("Unknown:[%r]\n");
        printf("Len:[%d %d]\n", len, len2);

	_printf("Length:[%d, %d]\n", len, len);
    printf("Length:[%d, %d]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    return (0);
}
