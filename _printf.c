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
                {'c', _print_char}, {'s', _print_string},
                {'%', _print_percent}
        };
        int charPrinted = 0;
	int j, i = 0;
	int spc;

	va_list arg_list;
        if (format == NULL)
                return (-1);
	va_start(arg_list, format);

	while(format[i])
        {
                if (format[i] == '%'){
                        if (!format[i + 1]) return (-1);
                        if (format[i + 1] == ' ')
                        {
                                while(format [i + 1] == ' ')
                                        i++;
                                spc = 1;
                                if (format[i + 1] == '\0') return (-1);
                        }
                        j = 0;
                        while (j < 3)
                        {
                                if (format[i + 1] == arr[j].id)
                                {
                                        charPrinted += arr[j].f(arg_list);
                                        i += 2;
                                        break;
                                } else
                                {
                                        if (spc)
                                        {
                                                charPrinted += _putchar('%');
                                                charPrinted += _putchar(' ');

                                        }
                                        charPrinted += _putchar(format[i + 1]);
                                        i += 2;
                                        break;
                                }
                                j++;
                        }

                }else
                {
                        charPrinted += _putchar(format[i]);
                        i++;
                }

        }

	va_end(arg_list);
	return (charPrinted);
}

