#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
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
int my_char_printer(va_list secret_args);
int my_percent_printer(va_list secret_args);
int my_binary_printer(va_list secret_args);
int my_string_printer(va_list secret_args);
int dec_print(va_list secret_args);

#endif
