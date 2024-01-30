#include "main.h"

/**
 * _print_i - prints integer
 * @args: argument
 * Return: number of characters printed
 */
int _print_i(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n /= 10;
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
		exp *= 10;
		num /= 10;
	}
	num = n;
	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num -= (digit * exp);
		exp /= 10;
		i++;
	}

	_putchar(last + '0');

	return (i);
}

/**
 * print_d - prints decimal
 * @args: argument
 * Return: number of characters printed
 */
int _print_d(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n /= 10;
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
		exp *= 10;
		num /= 10;
	}
	num = n;
	while (exp > 0)
	{
		digit = num / exp;
		_putchar(digit + '0');
		num -= (digit * exp);
		exp /= 10;
		i++;
	}

	_putchar(last + '0');

	return (i);
}

