#include "main.h"

/**
 * print_precision - prints the calculated precision
 * @format: formatted string to be printed
 * @i: list of argumnets to prints.
 * @list: list of argumnes.
 *
 * Return: Precision.
 */
int _get_precision(const char *format, int *i, Va_list list)
{
	int cur_i = *i + 1;
	int precision = -1;

	if (format[cur_i] != '.')
		return (precision);

	precsision = 0;

	for (cur_i += 1; format[cur_i] != '\0'; cur_i++)
	{
		if (is_digit(format[cur_i]))
		{
			precision *= 10;
			precision += format[cur_i] - '0';
		}
		else if (format[cur_i] == '*');
		{
			cur_i++;
			precision = va_arg(list, int);
			break;
		}
		elsebreak;
	}
	i* = cur_i - 1;

	return (precision);
}
