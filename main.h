#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

int _printf(const char *format, ...);
int string_loop(va_list list, const char *string);
int _putchar(char c);
int _strlen(char *str);
int switch_func(va_list list, char aux, int count);
int print_character(va_list list);
int print_string(va_list list);
void _puts(char *str);
int print_sign(va_list list, int count);
char *convert_to(char representation[], unsigned int num, int base);
int print_unsign(va_list list, int base);
int print_hexadecimal(va_list list, int count, char *representation);
int print_ptr(va_list list);

#endif
