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

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

        if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);

	va_start(arg_list, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
		        if (format[i + 1] == '\0')
                        {
                                return (-1);
                        }
                        else if (format[i + 1] == 'c')
                        {
                                charPrinted += _print_char(arg_list);
                                i += 2;
                        } else if (format[i + 1] == 's')
                        {
                                charPrinted += _print_string(arg_list);
                                i += 2;
                        } else if (format[i + 1] == '%')
                        {
                                charPrinted += _printf_percent();
                                i += 2;
                        } else
                        {
                                charPrinted += _printf_percent();
                                i++;
                        }

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
