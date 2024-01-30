#include "main.h"

/**
 * _print_b - prints a binary number
 * @args: argument
 * Return: number of character printed
 */
int _print_b(va_list args)
{
	int flag = 0;
	int count = 0;
	int i, b, a = 1;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}

