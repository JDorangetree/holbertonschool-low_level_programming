#include "holberton.h"
/**
 * print_diagonal - Draws a straight line
 *
 * @n: input value
 * Description: This draws a diagonal line
 * Return: 0 Value if it works
 */
void print_diagonal(int n)
{
	int f;
	int c;

	if (n > 0)
	{
		f = 0;
		while (f < n)
		{
			c = 0;
			while (c < n)
			{
				if (f > c)
				{
					_putchar(32);
				}
				c++;
			}
			_putchar(92);
			_putchar('\n');
			f++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
