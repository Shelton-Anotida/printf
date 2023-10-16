#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable number of arguments
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list ar_gs;

	int calculate_chars = 0;
	const char *super_ptr;

	va_start(ar_gs, format);

	for (super_ptr = format; *super_ptr != '\0'; super_ptr++)
	{
		if (*super_ptr == '%')
		{
			super_ptr++;
			switch (*super_ptr)
			{
				case 'c':
					calculate_chars += _putchar(va_arg(ar_gs, int));
					break;
				case 's':
					calculate_chars += _print_stringy(va_arg(ar_gs, char *));
					break;
				case '%':
					calculate_chars += _putchar('%');
					break;
				default:
					calculate_chars += _putchar('%') + _putchar(*super_ptr);
					break;
			}
		}
		else
		{
			calculate_chars += _putchar(*super_ptr);
		}
	}

	va_end(ar_gs);
	return (calculate_chars);
}

/**
 * _print_stringy - Custom function to print a string
 * @stringy: String to be printed
 *
 * Return: Number of characters printed
 */
int _print_stringy(char *stringy)
{
	int calculate_chars = 0;

	while (*stringy != '\0')
	{
		calculate_chars += _putchar(*stringy);
		stringy++;
	}
	return (calculate_chars);
}
