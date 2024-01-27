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

        if (format == NULL)
                return (-1);

        va_list arg_list;

        va_start(arg_list, format);
        

        while (format[i] != '\0')
        {
                if (format[i] == '%')
                {
                        if (format[i+1] == 'c')
                        {
                                charPrinted += _print_char(arg_list); 
                        }else if (format[i+1] == 's') {
                                charPrinted += _print_string(arg_list);     
                        }
                        i += 2;
                } else{
                        _putchar(format[i]);
                        i++;
                        charPrinted++;
                }
        }

        va_end(arg_list);
        return(charPrinted);
}
