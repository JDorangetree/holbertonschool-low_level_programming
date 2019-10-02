#include "holberton.h"
/**
 * puts2 -  print pair number of a string
 *@str: string for print
 * Description: return a string
 * Return: return the result
 */
void puts2(char *str)
{
	int i;
	int n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	n = 0;
	while (i >= 0)
	{
		if (str[n] % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
		i--;
	}
	_putchar('\n');
}
