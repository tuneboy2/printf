#include "main.h"

/**
 * _printf - Prints to Standard Output
 * @format: String to be printed
 *
 * Return: An Integer
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int length;

	if (format == NULL)
		return (-1);

	va_start(arg, format);
	length = string_loop(arg, format);
	va_end(arg);

	return (length);
}

/**
 * string_loop - Iterates through the format string
 * @list: The variadic argument list
 * @string: The string to be iterated
 *
 * Return: An Integer
 */

int string_loop(va_list list, const char *string)
{
	int i = 0, length = 0;
	char new;

	while (string[i] != '\0' && i < _strlen((char *)string))
	{
		new = string[i];
		if (new == '%')
		{
			i++;
			new = string[i];
			if (new == '\0')
				return (-1);

			length = switch_func(list, new, length);
			if (length == 0)
			{
				_putchar('%');
				_putchar(new);
				length += 2;
			}
		}
		else
		{
			_putchar(new);
			length++;
		}

		i++;
	}

	return (length);
}
