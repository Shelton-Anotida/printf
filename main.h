#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stdio.h>

int _print_string(char *str);
int _putchar(char c);
int _printf(const char *format, ...);
int print_decimal(va_list args);
int print_integer(va_list args);
#endif
