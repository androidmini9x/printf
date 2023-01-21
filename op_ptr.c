#include "main.h"
/**
 * print_ptr - print pointer value as hex
 * @ap: pointer
 * Return: number of printed char
 */
int print_ptr(va_list ap)
{
	void *p;
	int i, j, count;
	int hexArr[32];
	char *str = "(nil)";
	unsigned long number;

	p = va_arg(ap, void*);

	if (p == NULL)
	{
		i = 0;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		return (i);
	}
	number = (unsigned long) p;
	_putchar('0');
	_putchar('x');
	i = 0;
	count = 2;
	while (number != 0)
	{
		if ((number % 16) < 10)
			hexArr[i] = '0' + (number % 16);
		else
			hexArr[i] = 87 + (number % 16);
		number /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		count += _putchar(hexArr[j]);
	}

	
}
