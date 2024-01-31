
#include "main.h"
/**
 * _print_rot13 - print str to ROT13
 * @args: argument
 * Return: number of characters printed
 *
 */
int _print_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int i, count = 0;
	char *s = NULL;

	s = malloc(sizeof(char) * (_strlen(str) + 1));

	if (!s || !str)
		return (-1);

	for (count = 0; str[count]; count++)
	{
		for (i = 0; i < 52; i++)
		{
			if (str[count] == alpha[i])
			{
				s[count] = rot[i];
				break;
			}
		}

		if (str[count] != alpha[i])
			s[count] = str[count];
	}

	for (count = 0; s[count]; count++)
		_putchar(s[count]);

	free(s);

	return (count);
}
