#include "holberton.h"
/**
 * _puts_recursion - _putchar recursively
 * @s: given string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
