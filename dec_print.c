#include "main.h"

/**
 * dec_print - Prints a decimal
 * @secret_args: My argument
 *
 * Return: Number of chars printed
 */
int dec_print(va_list secret_args)
{
	int h = 0, k = 1, total = 0;
	unsigned int digit = va_arg(secret_args, int);

	if ((int)digit < 0)
	{
		digit *= -1;
		printf_putchar('-');
		total++;
	}
	for (; (digit / k) > 9; h++)
	{
		k *= 10;
	}

	while (k >= 1)
	{
		printf_putchar('0' + (digit / k) % 10);
		k /= 10;
		total++;
	}
	return (total);
}
