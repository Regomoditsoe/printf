#include "main.h"

/**
 * _putchar - prints characters
 * @c: the input character
 * Return: the written character
*/
int _putchar(char c)
{
	return (write(1, &c, 1));

}
