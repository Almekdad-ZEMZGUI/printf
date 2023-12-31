#include "main.h"

/**
 * get_specifier - finds the format function
 * @s: the format string
 *
 * Return: the number of bytes printed
 */
int (*get_specifier(char *s))(va_list ap, params_t *params)
{
	specifier_t specifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_S},
		{"p", print_address},
		{"r", print_rev},
		{"R", print_rot13},
		{"%", print_percent},
		{NULL, NULL}
	};
	int i = 0;

	while (specifiers[i].specifier)
	{
		if (*s == specifiers[i].specifier[0])
			return (specifiers[i].f);
		i++;
	}
	return (NULL);
}

/**
 * get_print_func - finds the format function
 * @s: the format string
 * @ap: the va_list
 * @params: struct parameter
 *
 * Return: the number of bytes printed
 */
int get_print_func(char *s, va_list ap, params_t *params)
{
	int (*f)(va_list, params_t *) = get_specifier(s);

	if (f)
		return (f(ap, params));
	return (0);
}

/**
 * get_flags - finds the flags
 * @s: the format string
 * @params: struct parameter
 *
 * Return: the number of bytes printed
 */
int get_flag(char *s, params_t *params)
{
	int i = 0;

	switch (*s)
	{
	case '+':
		i = params->plus_flag = 1;
		break;
	case ' ':
		i = params->space_flag = 1;
		break;
	case '#':
		i = params->hashtag_flag = 1;
		break;
	case '0':
		i = params->zero_flag = 1;
		break;
	case '-':
		i = params->minus_flag = 1;
		break;
	}
	return (i);
}

/**
 * get_modifier - finds the modifier function
 * @s: the format string
 * @params: struct parameter
 *
 * Return: if modifier was valid
 */
int get_modifier(char *s, params_t *params)
{
	int i = 0;

	switch (*s)
	{
	case 'h':
		i = params->h_modifier = 1;
		break;
	case 'l':
		i = params->l_modifier = 1;
		break;
	}
	return (i);
}

/**
 * get_width - finds the width
 * @s: the format string
 * @params: struct parameter
 *
 * Return: new pointer
 */
char *get_width(char *s, params_t *params, va_list ap)
{
	int d = 0;

	if (*s == '*')
	{
		d = va_arg(ap, int);
		s++;
	}
	else
	{
		while (_isdigit(*s))
			d = d * 10 + (*s++ - '0');
	}
	params->width = d;
	return (s);
}
