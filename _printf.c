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

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	while (format[i])
	{
		j = 0;
		if (format[i] == '%' && format[i + 1] == '\0')
                        return (-1);
		while (j < 3)
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


