#include "main.h"

/**
 * print_character - Print a Character to Standard Output
 * @list: The Variadic Argument List
 *
 * Return: An Integer
 */

int print_character(va_list list)
{
	char ch = va_arg(list, int);
	int count = 0;

	_putchar(ch);
	count++;

	return (count);
}

/**
 * print_string - Prints a String
 * @list: The Variadic Argument List
 *
 * Return: An Integer
 */

int print_string(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		str = "(null)";
		_puts(str);

		return (_strlen(str));
	}

	_puts(str);

	return (_strlen(str));
}

/**
 * print_sign - Print a Signed Integer
 * @list: The Variadic Argument List
 * @count: Current Length of the format string
 *
 * Return: An Integer
 */

int print_sign(va_list list, int count)
{
	int num = va_arg(list, int);
	char *str;

	if (num < 0)
	{
		_putchar('-');
		num = -(num);
		count++;
	}

	str = convert_to("0123456789abcdef", num, 10);
	_puts(str);
	count += _strlen(str);

	return (count);
}

/**
 * print_unsign - Prints a Number unsigned in any format
 * @list: The Variadic Argument List
 * @base: The Base
 *
 * Return: An Integer
 */

int print_unsign(va_list list, int base)
{
	unsigned int num = va_arg(list, unsigned int);
	char *str;

	str = convert_to("0123456789abcdef", num, base);
	_puts(str);

	return (_strlen(str));
}

/**
 * print_hexadecimal - Prints an Integer in Hexadecimal format
 * @list: The Variadic Argument List
 * @count: Current Length of the format string
 * @representation: The array of integer
 *
 * Return: An Integer
 */

int print_hexadecimal(va_list list, int count, char *representation)
{
	unsigned int num = va_arg(list, unsigned int);
	char *str;

	str = convert_to(representation, num, 16);
	_puts(str);
	count += _strlen(str);
	return (count);
}
