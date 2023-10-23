#include "main.h"

/**
 * sp_percent_p - prints a percent character
 * @secret_args: unused
 *
 * Return: the number of characters printed (always 1)
 */
int sp_percent_p(va_list secret_args)
{
	(void)secret_args;

	write(1, "%", 1);
	return (1);
}
