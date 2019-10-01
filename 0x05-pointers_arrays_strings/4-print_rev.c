#include "holberton.h"
/**
 *_print_rev -  count length of a string.
 *@s: string for print
 * Description: print a string in reverse
 * Return: return the result
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
