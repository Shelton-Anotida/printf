#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 * struct Converter - defines a structure for conversion functions
 * @spec: the conversion specifier character
 * @f: the conversion function
 */
typedef struct Converter
{
	char spec;
	int (*f)(va_list);
} Converter;

int _printf(const char *format, ...);
int printf_putchar(char c);
int character_print(va_list secret_args);
int super_string(va_list secret_args);
int sp_percent_p(va_list secret_args);

#endif
