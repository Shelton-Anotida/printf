#include "main.h"
/**
 * print_decimal - Print decimal
 * @args: argument to print
 * Return: number of characters always printed
 */
int print_decimal(va_list args)
{
	int x = va_arg(args, int);
	int num, last = x % 10, digit, exp = 1;
	int y = 1;

	x = x / 10;
	num = x;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		x = -x;
		last = -last;
		x++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = x;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			x++;
		}
	}
	_putchar(last + '0');
	return (y);
}