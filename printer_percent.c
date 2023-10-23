#include "main.h"

/**
 * my_percent_printer - a function that prints % to the console
 * which must be escaped by % first
 * @secret_args: % character to be printed
 * Return: 1 on success
 */
int my_percent_printer(va_list secret_args)
{
	(void) secret_args;

	printf_putchar('%');
	return (1);
}
