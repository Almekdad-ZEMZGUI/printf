#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
/**
 * struct matching - matching specifiers with functions
 * @id: type char of specifier
 * @f: the function
 *
 */
typedef struct matching
{
	char id;
	int (*f)();
} matching;

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list args);
int _strlen(char *s);
int _print_string(va_list args);
int _print_percent(void);
int _print_d(va_list args);
int _print_i(va_list args);
int _print_b(va_list args);

#endif /* MAIN_H */
