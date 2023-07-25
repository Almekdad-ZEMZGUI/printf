#include "main.h"

/**
 * print_from_to - prints from start to end
 * @start: the start of the address
 * @stop: the end of the address
 * @except: except address
 *
 * Return: number of bytes printed
 */
int print_from_to(char *start, char *stop, char *except)
{
	int count = 0;

	while (start <= stop)
	{
		if (start != except)
			count += _putchar(*start);
		start++;
	}
	return (count);
}

/**
 * print_rev - prints a string in reverse
 * @ap: string
 * @params: parameters of the struct
 *
 * Return: number of bytes printed
 */
int print_rev(va_list ap, params_t *params)
{
	int len, count = 0;
	char *str = va_arg(ap, char *);
	(void)params;

	if (!str)
		str = "(null)";

	for (len = 0; *str; str++)
		len++;
	str--;
	for (; len > 0; len--, str--)
		count += _putchar(*str);

	return (count);
}

/**
 * print_rot13 - prints a string in rot13
 * @ap: string
 * @params: parameters of the struct
 *
 * Return: number of bytes printed
 */
int print_rot13(va_list ap, params_t *params)
{
	int i, j, count = 0;
	char arr[] = "NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";
	char *a = va_arg(ap, char *);
	(void)params;

	i = 0;
	j = 0;
	while (a[i])
	{
		if ((a[i] >= 'A' && a[i] <= 'Z')
		    || (a[i] >= 'a' && a[i] <= 'z'))
		{
			j = a[i] - 65;
			count += _putchar(arr[j]);
		}
		else
			count += _putchar(a[i]);
		i++;
	}
	return (count);
}
