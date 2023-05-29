#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

void print_buffer(char buffer[], int *buff_ind);
/**
 * _printf - A function that produces output according to a format
 * @format: character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int a, printed = 0, printed_chars = 0;

	va_list list;
	

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (a = 0; format && format[a] != '\0'; a++)
	{
		if (format[a] != '%')
			printed_chars++;

		else
		{
			if (printed == -1)
				return (-1);

			printed_chars += printed;
		}
	}


	va_end(list);

	return (printed_chars);
}
