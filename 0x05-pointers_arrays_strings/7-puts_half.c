#include "holberton.h"
/**
 * puts_half -  print pair number of a string
 *@str: string for print
 * Description: return a string
 * Return: return the result
 */
void puts_half(char *str)
{
	int i;
	int n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	n = 0;
	if (i % 2 == 0)
	{
		n = (i / 2);
		while (n <= i)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = ((i - 1) / 2);
		while (n <= i)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
