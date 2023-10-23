#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string containing zero or more directives
 * @...: variable number of arguments to print
 *
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	Converter converters[] = {
		{'c', character_print},
		{'s', super_string},
		{'%', sp_percent_p},
		{0, NULL}
	};

	va_list secret_args;
	int i, j, calculate = 0;

	va_start(secret_args, format);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; converters[j].spec; j++)
			{
				if (format[i] == converters[j].spec)
				{
					calculate += converters[j].f(secret_args);
					break;
				}
			}
		}
		else
		{
			write(1, &format[i], 1);
			calculate++;
		}
	}

	va_end(secret_args);
	return (calculate);
}
