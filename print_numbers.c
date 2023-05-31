#include "main.h"
/**
 * p_integer - prints unsigned and signed numbers
 * @args: the given number
 * Return: the integer
*/
int p_integer(va_list args)
{
	int num = va_arg(args, int);
	int x;

	x = print_i(num);
	return (x);
}
