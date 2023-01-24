#include "main.h"
/**
 * print_hex_s - print number as hex
 * Small letter %x
 * @ap: pointer
 * Return: count of printed length
 */
int print_hex_s(va_list ap)
{
	int i, j;
	unsigned int dec = va_arg(ap, unsigned int);
	int hexArr[32];
	int count = 0;

	if (dec == 0)
	{
		_putchar('0');
		return (1);
	}

	i = 0;
	while (dec != 0)
	{
		if ((dec % 16) < 10)
			hexArr[i] = '0' + (dec % 16);
		else
			hexArr[i] = 87 + (dec % 16);
		dec /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		count += _putchar(hexArr[j]);
	}
	return (count);
}
