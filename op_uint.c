#include "main.h"
/**
 * print_unint - print unsigned integer
 * @ap: pointer
 * Return: count of printed length
 */
int print_unint(va_list ap)
{
	unsigned int number = va_arg(ap, unsigned int);
	unsigned int divider = 1;
	int count = 0;

	while (number / divider > 9)
		divider *= 10;
	while (divider != 0)
	{
		count += _putchar('0' + (number / divider));
		number %= divider;
		divider /= 10;
	}

	return (count);
}
