#include "main.h"
/**
 * print_number - print very large numbers without using long
 * @n: the input number
*/
int print_i(int n)
{
	unsigned int num = n;
	int len = 0;

	if (n < 0)
	{
		_putchar('-');
		num *= -1;
		len = len + 1;
	}
	if ((num / 10) > 0)
		print_i(num / 10);
	_putchar((num % 10) + 48);
	len = len + 1;
	return (len);
}
