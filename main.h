#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list args);
int _strlen(char *s);
int _print_string(va_list args);
int _print_sgndec(va_list args);
int _print_int(va_list args);

#endif /* MAIN_H */
