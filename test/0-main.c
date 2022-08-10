#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    long int res = INT_MAX;
    res *= 2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    ui = -1024;
    addr = (void *)0x7ffe637541f0;
   
   _printf("%u\n", UINT_MAX);
  printf("%u\n", UINT_MAX);
  _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    
    len = _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));                                                         len2 = printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    _printf("Len: [%i], Len2: [%d]\n", len, len2);
    printf("Len: [%i,], Len2: [%d]\n", len, len2);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    _printf("Len %d\n", len);
    printf("Len2 %d\n", len2);
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    len = _printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);
   printf("%d\n", len);
   _printf("Address %p\n", 500);
   printf("Address %p\n", 500);

    return (0);
}
