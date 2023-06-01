#include "main.h"
/**
 * p_rev - function prints a string in reverse
 * @args: the input list
 * Return: the length
*/
int p_rev(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
		i++;

	while (i--)
	{
		_putchar(s[i]);
		len = len + 1;
	}
	return (len);
}
