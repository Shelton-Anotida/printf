#include "main.h"

/**
 * my_string_printer - a function that print the string in the pfList
 * when it encounters %s
 * @secret_args: the string to be printed
 * Return: the length of the string
 */
int my_string_printer(va_list secret_args)
{
	int fam;
	char *strfam;

	strfam = va_arg(secret_args, char *);
	if (strfam == NULL)
		strfam = "(null)";
	for (fam = 0; strfam[fam] != '\0'; fam++)
	{
		printf_putchar(strfam[fam]);
	}
	return (fam);
}
