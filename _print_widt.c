#include "main.h"

/**
 * _print_widt - calculates the widt for printing
 * @format: formatted string to print arguments.
 * @i: list of argument printed.
 * @list: list of arguments.
 *
 * Return: widt
 */
int _print_widt(const char *format, int *i, va_list list)
{
	int cur_i;
	int widt = 0;

	for (cur_i = *i + 1; format[cur_i] != '\0'; cur_i++)
	{
		if (is_digit(format[cur_i]))
		{
			widt *= 10;
			widt += format[cur_i] - '0';
		}
		else if (format[cur_i] == '*')
		{
			cur_i++;
			widt = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = cur_i - 1;

		return (widt);
