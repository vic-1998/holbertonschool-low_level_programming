#include "holberton.h"
/**
 * print_number - print integer with _putchar()
 * @n: number to print
 *
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	print_number(n / 10);
	_putchar(n % 10 + '0');
}