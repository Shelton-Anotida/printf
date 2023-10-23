#include "main.h"

/**
 * character_print - prints a character
 * @secret_args: the va_list that contains the character to print
 *
 * Return: the number of characters printed
 */
int character_print(va_list secret_args)
{
	char c = va_arg(secret_args, int);

	write(1, &c, 1);
	return (1);
}
