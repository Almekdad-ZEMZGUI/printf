#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>

typedef struct matching
{
	char *id;
	int (*f)();
} matching;

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list args);
int _strlen(char *s);
int _print_string(va_list args);
<<<<<<< HEAD
int _print_sgndec(va_list args);
int _print_int(va_list args);
=======
int _print_percent(void);
>>>>>>> 56dfa5c88d70de62fe7270802b145caecda9ac39

#endif /* MAIN_H */
