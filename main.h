#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>
#include <stddef.h>

struct convert
{
	char *specifier;
	int (*func)(va_list);
};

typedef struct convert convert_t;

int _putchar(char c);
int _printf(const char *format, ...);
int p_percent(va_list);
int p_char(va_list);
int p_string(va_list args);
int p_integer(va_list);
int p_num(va_list);
int p_all(const char *format, va_list, convert_t func_list[], va_list args);

#endif
