#include "main.h"

/**
 * _print_p - prints memory address of a pointer in hexadecimal
 * @val: argument
 * Return: counter
 */
int _print_p(va_list args)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b, i;

	p = va_arg(args, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = _print_hexx(a);
	return (b + 2);
}

/**
 * _print_hexx - prints an hexadecimal number
 * @num: argument
 * Return: number of character printed
 */
int _print_hexx(unsigned long int num)
{
	long int i;
	long int *arr;
	long int count = 0;
	unsigned long int tmp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(long int));
	if (arr == NULL)
                return (0);

	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 16;
		tmp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}

