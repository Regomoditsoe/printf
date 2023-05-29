#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = 0;

	printf("Length:[%d, %i]\n", len, len);
	printf("Character:[%c]\n", 'H');
	printf("String:[%s]\n", "I am a string !");

	return (0);
}
