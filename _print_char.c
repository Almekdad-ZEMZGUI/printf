#include "main.h"

/**
 * printf_char - prints a char
 * @val: arguments
 * Return: 1
 */
int _print_char(va_list args)
{       
        char c;

        c = va_arg(args, int);
        _putchar(c);
        return (1);
}
