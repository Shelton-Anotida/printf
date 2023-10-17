/**
* print_hexa - Prints a hexadecimal number in lower or upper
* @types: List of arguments
* @map_to: values to map the number to
* @buffer: The buffer array to handle print
* @flags:  It calculates active flags
* @flag_ch: It calculates active flags as well
* @width: To get width
* @precision: The precision specification
* @size: The size specifier
* @size: The size specification
* Return: The number of characters printed
*/
int print_hexa(va_list types, char map_to[], char buffer[],
int flags, char flag_ch, int width, int precision, int size)
{
int i = BUFF_SIZE - 2;
unsigned long int num = va_arg(types, unsigned long int);
unsigned long int init_num = num;
UNUSED(width);
num = convert_size_unsgnd(num, size);
if (num == 0)
buffer[i--] = '0';
buffer[BUFF_SIZE - 1] = '\0';
while (num > 0)
{
buffer[i--] = map_to[num % 16];
num /= 16;
}
if (flags & F_HASH && init_num != 0)
{
buffer[i--] = flag_ch;
buffer[i--] = '0';
}
i++;
return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}
