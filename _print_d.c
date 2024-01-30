#include "main.h"

/**
 * _print_d - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */
int _print_d(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	int temp;
	int digits = 1;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	temp = num;
	while (temp /= 10)
	{
		digits *= 10;
	}
	while (digits)
	{
		_putchar('0' + num / digits);
		num %= digits;
		digits /= 10;
		count++;
	}
	return (count);
}

/**
 * _print_i - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int _print_i(va_list args)
{
	return _print_d(args);
}
