
/**
 * print_octal - print int as octal
 * @ap: pointer
 * Return: count of printed length
 */
int print_octal(va_list ap)
{
	unsigned int decimal = va_arg(ap, unsigned int);
	long octal = 0;
	long i = 1;
	int count = 0;

	while (decimal != 0)
	{
		octal += (decimal % 8) * i;
		decimal /= 8;
		i *= 10;
	}

	i = 1;
	while (octal / i > 9)
		i *= 10;
	while (i != 0)
	{
		count += _putchar('0' + (octal / i));
		octal %= i;
		i /= 10;
	}

	return (count);
}
