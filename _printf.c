#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	matching arr[] = {
		{'c', _print_char}, {'s', _print_string},
		{'%', _print_percent}, {'d', _print_d}, {'i', _print_i},
		{'b', _print_b}, {'u', _print_u}, {'o', _print_o},
		{'x', _print_hex}, {'X', _print_HEX}, {'S', _print_S},
		{'p', _print_p}, {'r', _print_r}, {'R', _print_rot13}
	};
	int charPrinted = 0;
	int j, i = 0;
	va_list arg_list;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(arg_list, format);
	while (format[i])
	{
		j = 0;
		while (j < 14)
		{
			if (format[i] == '%' && arr[j].id == format[i + 1])
			{
				charPrinted += arr[j].f(arg_list);
				i += 2;
				j = -1;
				break;
			}
			j++;
		}
		if (j == -1)
			continue;
		charPrinted += _putchar(format[i]);
		i++;
	}
	va_end(arg_list);
	return (charPrinted);
}
