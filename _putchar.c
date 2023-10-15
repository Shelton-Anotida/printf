#include "main.h"

/**
* _putchar - custom function to print a character,
* interger or percentage to the standard output (stdout)
* Return: on success, 1. on error, -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
