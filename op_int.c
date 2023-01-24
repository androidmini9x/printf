#include "main.h"
/**
 * print_int - print integerz
 * @ap: pointer
 * Return: count of printed length
 */
int print_int(va_list ap)
{
	unsigned int number;
	unsigned int divider = 1;
	int count = 0;
	int arg = va_arg(ap, int);

	if (arg < 0)
	{
		_putchar('-');
		count++;
		number = -1 * arg;
	}
	else
		number = arg;

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
