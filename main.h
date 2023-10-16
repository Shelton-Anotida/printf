#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stdio.h>

int _print_stringy(char *stringy);
int _putchar(char c);
int _printf(const char *format, ...);
int super_print_decimals(va_list ar_gs);
int super_print_integers(va_list ar_gs);

#endif
