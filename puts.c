#include <unistd.h>
#include <stdarg.h>
/**
 * _putchar - print the character c to stdout
 * @c: The character to print
 * Return: 1 or -1 if failed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
