#include "main.h"

/**
 * _print_r - prints string in reverse
 * @args: argument
 *
 * Return: the string in reverse
 */
int _print_r(va_list args)
{
	char *s = va_arg(args, char*);
	int i;
	int count = 0;

	if (s == NULL)
		s = "(null)";
	while (s[count] != '\0')
		count++;
	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);
	return (count);
}

