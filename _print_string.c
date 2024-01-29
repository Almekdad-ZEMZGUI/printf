#include "main.h"

/**
 * _strlen - Returns the lenght of a string
 * @s: Type char pointer
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _print_string - print a string
 * @args: arguments
 *
 * Return: the length of the string
 */
int _print_string(va_list args)
{
	char *s;
	int i, len;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";

	len = _strlen(s);
	for (i = 0; i < len; i++)
		_putchar(s[i]);

	return (len);
}
