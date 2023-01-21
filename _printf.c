#include "main.h"
/**
 * _printf - print output according to a format.
 * @format: is a character string that chose the type.
 * Return: [int] number of characters printed without null by \0
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i = 0, count = 0, j;
	op_t op[] = {{'c', print_char}, {'s', print_str}, {'i', print_int},
		{'d', print_int}, {'b', print_binary}, {'u', print_unint},
		{'o', print_octal}, {'x', print_hex_s}, {'X', print_hex},
		{'%', print_pres}, {'S', print_strhex}, {'p', print_ptr},
		{'r', print_rstr}, {'R', print_r13}};
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ap, format);
	while (*(format + i) != '\0')
	{
		j = 0;
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			while (j < 14)
			{
				if (format[i + 1] == op[j].op_type)
				{
					count += op[j].func(ap) - 1;
					i++;
					break;
				}
				j++;
			}
			if (j == 14)
				_putchar(format[i]);
		}
		else
			_putchar(format[i]);
		i++;
		count++;
	}
	va_end(ap);
	return (count);
}
