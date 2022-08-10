#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints a Character
 * @c: Character to be printed
 *
 * Return: An integer
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - Determines the length of a String
 * @str: The string to be determined
 *
 * Return: An Integer
 */

int _strlen(char *str)
{
	int i = 0, count = 0;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}

/**
 * _puts - Prints a String
 * @str: The string to be printed
 *
 * Return: Void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * convert_to - Convert an Integer to a string of any format
 * @representation: An Array of integer format
 * @num: The integer to be converted
 * @base: The base to which the number should be converted yo
 *
 * Return: A Pointer to a Character
 */

char *convert_to(char representation[], unsigned int num, int base)
{
	char *ptr;
	int mod;
	static char buffer[128];

	ptr = &buffer[127];
	*ptr = '\0';

	do {
		mod = num % base;
		*--ptr = representation[mod];
		num /= base;
	} while (num != 0);

	return (ptr);
}
