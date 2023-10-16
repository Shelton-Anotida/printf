#include "unistd.h"

/**
* _putchar - custom function to print a character,
* interger or percentage to the standard output (stdout)
* This function takes a character 'c' and writes it to the standard output
* @c: The character to be printed.
* Return: on success, 1. on error, -1, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
