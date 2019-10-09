#include "holberton.h"
/**
 * _puts_recursion - print a string
 * @s: pointer to char
 *
 * Description: print a string followed by a new line
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
