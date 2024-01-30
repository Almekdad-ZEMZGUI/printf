#include "main.h"

/**
 * _print_i - prints integer
 * @args: argument
 * Return: number of characters printed
 */
int _print_i(va_list args)
{
	int n = va_arg(args, int);
	int num, lst = n % 10, digit, exp = 1;
	int count = 1;

	n /= 10;
	num = n;

	if (lst < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		lst = -lst;
		count++;
	}
	if (num > 0)
	{
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
			count++;
		}
	}
	_putchar(lst + '0');

	return (count);
}

/**
 * _print_d - prints decimal
 * @args: argument
 * Return: number of characters printed
 */
int _print_d(va_list args)
{
	int n = va_arg(args, int);
	int num, lst = n % 10, digit, exp = 1;
	int count = 1;

	n /= 10;
	num = n;

	if (lst < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		lst = -lst;
		count++;
	}
	if (num > 0)
	{
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
			count++;
		}
	}
	_putchar(lst + '0');

	return (count);
}
