#include "main.h"
/**
 * print_char - print char
 * @ap: pointer
 * Return: int
 */
int print_char(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}
/**
 * print_pres - print char
 * Return: int
 */
int print_pres(void)
{
	return (_putchar('%'));
}
