#include "main.h"

/**
 * my_binary_printer - prints binary
 * @secret_args: argument holder
 * Return: 0
 */
int my_binary_printer(va_list secret_args)
{
	int u, o, m;
	unsigned int digit, bulk;
	char *_len_;

	digit = va_arg(secret_args, unsigned int);

	if (digit == 0)
	{
		printf_putchar('0');
		return (1);
	}

	bulk = digit;
	for (u = 0; bulk > 0; u++)
	{
		bulk = bulk / 2;
	}
	_len_ = malloc((sizeof(char) * u) + 1);
	if (_len_ == NULL)
		return (-1);
	for (o = 0; digit > 0; o++)
	{
		_len_[o] = digit % 2;
		digit = digit / 2;
	}
	for (m = (o - 1); m >= 0; m--)
	{
		printf_putchar('0' + _len_[m]);
	}
	free(_len_);
	return (u);
}
