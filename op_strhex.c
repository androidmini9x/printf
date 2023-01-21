#include "main.h"
/**
 * print_strhex - print ascii string
 * @ap: pointer
 * Return: count of printed length
 */
int print_strhex(va_list ap)
{
	int i = 0, len = 0;
	char *str = va_arg(ap, char*);

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			if (str[i] < 16)
			{
				_putchar('0');
				len++;
			}
			len += ascii_hex(str[i]);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
		i++;
	}
	return (len);
}
/**
 * ascii_hex - convert ascii to hex
 * Big letter %X
 * @char_int: char number
 * Return: count of printed length
 */
int ascii_hex(int char_int)
{
	int i, j;
	int hexArr[32];
	int count = 0;

	if (char_int == 0)
	{
		_putchar('0');
		return (1);
	}

	i = 0;
	while (char_int != 0)
	{
		if ((char_int % 16) < 10)
			hexArr[i] = '0' + (char_int % 16);
		else
			hexArr[i] = 55 + (char_int % 16);
		char_int /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		count += _putchar(hexArr[j]);
	}
	return (count);
