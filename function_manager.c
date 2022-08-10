#include "main.h"

/**
 * switch_func - Helps to deteemine the fomat specifier
 * @list: The Variadic Argument List
 * @aux: The formwt specifiee case
 * @count: The current length of the string
 *
 * Return: An Integer
 */

int switch_func(va_list list, char aux, int count)
{
	switch (aux)
	{
		case 'c':
			count += print_character(list);
			break;
		case 'b':
			count += print_unsign(list, 2);
			break;
		case '%':
			_putchar('%');
			count++;
			break;
		case 's':
			count += print_string(list);
			break;
		case 'u':
			count += print_unsign(list, 10);
			break;
		case 'x':
			count = print_hexadecimal(list, count, "0123456789abcdef");
			break;
		case 'X':
			count = print_hexadecimal(list, count, "0123456789ABCDEF");
			break;
		case 'd':
		case 'i':
			count = print_sign(list, count);
			break;
		case 'p':
			count += print_ptr(list);
			break;
		case 'o':
			count += print_unsign(list, 8);
			break;
		default:
			return (0);
	}
	return (count);
}
