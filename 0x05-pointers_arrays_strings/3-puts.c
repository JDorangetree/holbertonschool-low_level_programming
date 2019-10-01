#include "holberton.h"
/**
 * _puts -  count length of a string.
 *@str: string for print
 * Description: print a string
 * Return: return the result
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
