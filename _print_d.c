#include "main.h"

/**
 * _print_i - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int _print_i(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	while (num / 10 != 0)
	{
		exp = exp * 10;
		num = num / 10;
	}
	num = n;
	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num = num - (digit * exp);
		exp = exp / 10;
		i++;
	}

	_putchar(last + '0');

	return (i);
}

/**
 * _print_d - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int _print_d(va_list args)
{
	return (_print_i(args));
}