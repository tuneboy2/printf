#include "main.h"

/**
 * print_ptr - Print an Address
 * @list: The Variadic Argument List
 *
 * Return: An Integer
 */

int print_ptr(va_list list)
{
	int count = 2;
	char *str = va_arg(list, void *);

	_puts(str);
	count += _strlen(str);

	return (count);
}
