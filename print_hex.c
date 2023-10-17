#include "main.h"

/**
* print_hexadecimal - Prints an unsigned number in hexadecimal
* @types: List arguments
* @buffer: The buffer array to handle print
* @flags:  It calculates active flags
* @width: get the width always
* @precision: The precision specification
* @size: The size specifier
* Return: Number of chars printed
*/
int print_hexadecimal(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
return (print_hexa(types, "0123456789abcdef", buffer,
flags, 'x', width, precision, size));
}
