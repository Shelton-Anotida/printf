#include "main.h"
/**
* print_unsigned - Prints an unsigned integer number
* @buffer: The buffer array to handle print
* @flags: This calculates active flags
* @width: Always get width
* @types: List a of arguments
* @precision: The precision specification
* @size: The Size specifier
* Return: Number of chars printed.
*/
int print_unsigned(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
int i = BUFF_SIZE - 2;
unsigned long int num = va_arg(types, unsigned long int);
num = convert_size_unsgnd(num, size);
if (num == 0)
buffer[i--] = '0';
buffer[BUFF_SIZE - 1] = '\0';
while (num > 0)
{
buffer[i--] = (num % 10) + '0';
num /= 10;
}
i++;
return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}
