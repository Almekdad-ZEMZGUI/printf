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
		{'%', _print_percent}
	};
	int charPrinted = 0;
	int j, i = 0;
	va_list arg_list;

	if (!format)
		return (-1);
	va_start(arg_list, format);
Here:
	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 3)
		{
			if (format[i] == '%' && !format[i + 1])
				return (-1);
			if (format[i] == '%' && format[i + 1] == ' ')
				return (-1);
			if (format[i] == '%' && arr[j].id == format[i + 1])
			{
				charPrinted += arr[j].f(arg_list);
				i += 2;
				goto Here;
			}
			j++;
		}
		charPrinted += _putchar(format[i]);
		i++;
	}
	va_end(arg_list);
	return (charPrinted);
}

