#include "holberton.h"
/**
 * _puts_recursion - print a string
 * @s: pointer to char
 *
 * Description: print a string followed by a new line
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}

}
