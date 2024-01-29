#include "main.h"
/**
 * print_sgndec - prints a signed decimal
 * @args: argument to print
 *
 * Return: number of integer printed
 */
int _print_sgndec(va_list args)
{
	int m = va_arg(args, int);
	int num1, last = m % 10, digit, exp = 1;
	int a = 1;

	m = m / 10;
	num1 = m;

	if (last < 0)
	{
		_putchar('-');
		num1 = -num1;
		m = -m;
		last = -last;
		a++;
	}
	if (num1 > 0)
	{
		while (num1 / 10 != 0)
		{
			exp = exp * 10;
			num1 = num1 / 10;
		}
		num1 = m;
		while (exp > 0)
		{
			digit = num1 / exp;
			_putchar(digit + '0');
			num1 = num1 - (digit * exp);
			exp = exp / 10;
			a++;
		}
	}
	_putchar(last + '0');

	return (a);
}

#include "main.h"
/**
 * print_int - prints a signed decimal
 * @args: argument to print
 *
 * Return: number of integer printed
 */
int _print_int(va_list args)
{
        int m = va_arg(args, int);
        int num1, last = m % 10, digit, exp = 1;
        int a = 1;

	m = m / 10;
        num1 = m;

        if (last < 0)
        {
                _putchar('-');
                num1 = -num1;
                m = -m;
                last = -last;
                a++;
        }
        if (num1 > 0)
	{
		while (num1 / 10 != 0)
		{
			exp = exp * 10;
                        num1 = num1 / 10;
                }
                num1 = m;
                while (exp > 0)
                {
                        digit = num1 / exp;
                        _putchar(digit + '0');
                        num1 = num1 - (digit * exp);
                        exp = exp / 10;
                        a++;
                }
        }
	_putchar(last + '0');
	
	return (a);
}	


