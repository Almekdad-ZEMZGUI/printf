#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
        matching arr[] = {
                {"%c", _print_char}, {"%s", _print_string},
                {"%%", _print_percent}
        };
        int charPrinted = 0;
	int j, i = 0;

	va_list arg_list;

	if (format == NULL || (format[0] == '%' && !format[1])) return (-1);

	va_start(arg_list, format);

Here:
	while(format[i])
        {
                j = 0;
                while(j < 3)
                {
                        if (arr[j].id[0] == format[i] && arr[j].id[1] == format[i + 1])
                        {
                                charPrinted += arr[j].f(arg_list);
                                i += 2;
                                goto Here;
                        }
                        if (arr[i].id[0] == format[i] && (format[i + 1] == '\0' || format[i + 1] == ' '))
                                return (charPrinted);

                        j++;

                }
                charPrinted += _putchar(format[i]);
                i++;
        }
	va_end(arg_list);
	return (charPrinted);
}

