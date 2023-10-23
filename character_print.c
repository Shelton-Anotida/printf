#include "main.h"

/**
 * my_char_printer - a function to print character from the pfList.
 * it converts the specifier %c into readeable format
 * @secret_args: the character to be printed
 * Return: 1 which indicates success
 */

int my_char_printer(va_list secret_args)
{
	char role;

	role = (char)va_arg(secret_args, int);
	printf_putchar(role);
	return (1);
}
