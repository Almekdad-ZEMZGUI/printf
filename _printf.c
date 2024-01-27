#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int charPrinted = 0;
	int i = 0;

	va_list arg_list;

	va_start(arg_list, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				charPrinted += _print_char(arg_list);
			} else if (format[i + 1] == 's')
			{
				charPrinted += _print_string(arg_list);
			} else if (format[i + 1] == '%')
			{
				charPrinted += _putchar(format[i + 1]);
			}
			i += 2;
		} else
		{
		_putchar(format[i]);
		i++;
		charPrinted++;
		}
	}

	va_end(arg_list);
	return (charPrinted);
}
