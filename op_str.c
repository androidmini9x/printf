include "main.h"
/**
 * print_str - print string
 * @ap: pointer
 * Return: number of printed char
 */
int print_str(va_list ap)
{
	int i = 0;
	char *str = va_arg(ap, char*);

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
 * print_rstr - print reverse string
 * @ap: pointer
 * Return: number of printed char
 */
int print_rstr(va_list ap)
{
	int i = 0, len;
	char *str = va_arg(ap, char*);

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
		i++;
	len = i;

	while (i > 0)
	{
		_putchar(str[i - 1]);
		--i;
	}
	return (len);
}
/**
 * print_r13 - prints the rot13'ed string
 * @ap: pointer
 * Return: number of printed char
 */
int print_r13(va_list ap)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, j;
	char *str = va_arg(ap, char*);

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		j = 0;
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
		{
			while (j < 52)
			{
				if (str[i] == alpha[j])
				{
					_putchar(rot13[j]);
					break;
				}
				j++;
			}
		}
		else
			_putchar(str[i]);
		i++;
	}
	return (i);
}
