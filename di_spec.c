#include "main.h"
/**
 * print_i - print very large numbers without using long
 * @n: the input number
 * Return: the length of the number
*/
int print_i(int n)
{
	unsigned int num = n;
	int len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num *= -1;
	}
	if ((num / 10) > 0)
		print_i(num / 10);
	len += _putchar((num % 10) + 48);
	return (len);
}
