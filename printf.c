#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

{
	char *specifier;
	int (*func)(va_list);
} convert_t;

int p_percent(va_list args)
{
	(void)args; /** Mark the parameter as unused */
	return (0);
}

int p_char(va_list args)
{
	(void)args; /** Mark the parameter as unused */
	return (0);
}

int p_string(va_list args)
{
	(void)args; /** Mark the parameter as unused */
	return (0);
}

int p_integer(va_list args)
{
	(void)args; /** Mark the parameter as unused */
	return (0);
}

int parser(const char *format, convert_t *func_list, va_list args)
{
	(void)args; /** Mark the parameter as unused */
	(void)func_list; /** Mark the parameter as unused */
	(void)format; /** Mark the parameter as unused */
	return (0);
}

int p_percent(va_list args);
int p_char(va_list args);
int p_string(va_list args);
int p_integer(va_list args);
int parser(const char *format, convert_t *func_list, va_list args);

/**
 * _printf - A function that produces output according to a format
 * @format: character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;

	convert_t func_list[] = {
		{"%", p_percent},
		{"c", p_char},
		{"s", p_string},
		{"d", p_integer},
		{"i", p_integer},
		{NULL, NULL}
	};

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

		/** Call a parser function */

		printed_chars = parser(format, func_list, args);

	va_end(args);

	return (printed_chars);
}
