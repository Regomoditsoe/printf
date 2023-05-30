#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * p_percent - declaring the function for percent specifier
 * @args: the argument passed
 * Return: the number of characters printed
*/
int p_percent(va_list args)
{
	(void)args; /** Mark the parameter as unused */
	putchar('%');
	return (1);
}

/**
 * p_char - declaring the function for c specifier
 * @args: the argument passed
 * Return: the number of characters printed
*/
int p_char(va_list args)
{
	char c = (char)va_arg(args, int);

	putchar(c);
	return (1);
}

/**
 * p_string - declaring the function for s specifier
 * @args: the argument passed
 * Return: the number of characters printed
*/
int p_string(va_list args)
{
	const char *str = va_arg(args, const char *);
	int count = 0;

	while (*str != '\0')
	{
		putchar(*str);
		str++;
		count++;
	}
		return (count);
}

/**
 * p_all - declaring the parsing function as unused
 * @format: the input
 * @func_list: the struct will choose the func from
 * @args: the input argument
 * Return: 0
*/

int p_all(const char *format, convert_t *func_list, va_list args)
{
	(void)args;
	(void)func_list; /** Mark the parameter as unused */
	(void)format;
	return (0);
}

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
		{NULL, NULL}
	};

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

		printed_chars = p_all(format, func_list, args);

	va_end(args);

	return (printed_chars);
}
