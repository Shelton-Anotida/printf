/**
* print_binary - Prints an unsigned number
* @types: List of arguments
* @buffer: Buffer array to handle print
* @flags: It calculates active flags
* @width: To get width.
* @precision:The precision specification
* @size: The size specifier
* Return: The number of character printed.
*/
int print_binary(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
unsigned int b, c, i, sum;
unsigned int a[32];
int count;
UNUSED(buffer);
UNUSED(flags);
UNUSED(width);
UNUSED(precision);
UNUSED(size);
b = va_arg(types, unsigned int);
c = 2147483648; /* (2 ^ 31) */
a[0] = b / c;
for (i = 1; i < 32; i++)
{
m /= 2;
a[i] = (b / c) % 2;
}
for (i = 0, sum = 0, count = 0; i < 32; i++)
{
sum += a[i];
if (sum || i == 31)
{
char z = '0' + a[i];
write(1, &z, 1);
count++;
}
}
return (count);
}
