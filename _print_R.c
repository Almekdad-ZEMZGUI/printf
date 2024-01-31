
#include "main.h"
/**
 * _print_rot13 - print str to ROT13
 * @args: argument
 * Return: number of characters printed
 *
 */
int _print_rot13(va_list args)
{
    char *s = va_arg(args, char*);
    int i, count = 0;

    if (s == NULL)
        s = "(null)";

    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            char base = (s[i] >= 'a' && s[i] <= 'z') ? 'a' : 'A';
            _putchar((s[i] - base + 13) % 26 + base);
            count++;
        }
        else
        {
            _putchar(s[i]);
            count++;
        }
    }

    return (count);
}
