#include "main.h"

/**
 * p_all - parses the files and gets the length
 * @format: input format
 * @func_list: gets the required function
 * @args: the arguments
 * Return: returns the length of the printed chars
*/
int p_all(const char *format, convert_t func_list[], va_list args)
{
	int i, l, val, len;

	len = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (l = 0; func_list[i].specifier != NULL; l++)
			{
				if (format[i + 1] == func_list[l].specifier[0])
				{
					val = func_list[l].func(args);
					if (val == -1)
						return (-1);

					len = len + val;
					break;
				}
			}
			if (func_list[l].specifier == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(' ');
					_putchar(format[i + 1]);
					len = len + 3;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	return (len);
}


