#include "main.h"

/**
 * _print_o - prints an octal number
 * @args: argument
 * Return: number of character printed
 */
int _print_o(va_list args)
{
	int i;
	int *arr;
	int count = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int tmp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 8;
		tmp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);

	return (count);
}


