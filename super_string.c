#include "main.h"

/**
 * super_string - prints a string
 * @secret_args: the va_list that contains the string to print
 *
 * Return: the number of characters printed
 */
int super_string(va_list secret_args)
{
	char *str = va_arg(secret_args, char *);
	int len = 0;

	if (str == NULL)
		str = "(null)";

	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}

	return (len);
}
