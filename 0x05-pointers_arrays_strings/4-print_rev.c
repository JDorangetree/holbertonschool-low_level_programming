#include "holberton.h"
/**
 * print_rev -  count length of a string.
 *@s: string for print
 * Description: print a string in reverse
 * Return: return the result
 */
void print_rev(char *s)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		i++;
		n++;
	}
	n = n - 1;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
