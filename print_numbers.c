#include "main.h"
/**
 * p_integer - prints unsigned and signed numbers
 * @args: the given number
 * Return: the integer
*/
int p_integer(va_list args)
{
	int base;
	long int n;
	unsigned long int n2;

	n = va_arg(args, long int);
	base = 1;

	if (n < 0)
	{
		_putchar('-');
		n2 = (unsigned long int)(n * -1);
	}
	else
		n2 = n;
	while ((n2 / base) > 9)
	{
		base = base * 10;
	}
	while (base != 0)
	{
		_putchar((n2 / base) + '0');
		n2 = n2 % base;
		base = base / 10;
	}
	return (n2);
}
