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
	_putchar('%');
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

	_putchar(c);
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

	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
		return (count);
}

/**
 * _printf - A function that produces output according to a format
 * @format: character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	convert_t func_list[] = {
		{"%", p_percent},
		{"c", p_char},
		{"s", p_string},
		{"d", p_integer},
		{NULL, NULL}
	};

	va_list args;
	int len;

	va_start(args, format);

	len = p_all(format, func_list, args);

	va_end(args);

	return (len);
}
