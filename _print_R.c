
#include "main.h"
/**
 * _print_rot13 - print str to ROT13
 * @args: argument
 * Return: number of characters printed
 *
 */
int _print_rot13(va_list args)
{
	int i, j, count = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char arr[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rot[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; arr[j] && !k; j++)
		{
			if (s[i] == arr[j])
			{
				_putchar(rot[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}

