#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stdio.h>

int _print_string(char *str);
int _putchar(char c);
int _printf(const char *format, ...);
int print_dec(va_list args);
int print_int(va_list args);
int print_unsigned(va_list args);
#endif
