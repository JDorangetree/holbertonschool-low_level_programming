#include "holberton.h"
/**
 * print_square - Draws a straight line
 *
 * @size: input value
 * Description: This draws a diagonal line
 * Return: 0 Value if it works
 */
void print_square(int size)
{
	int f;
	int c;

	if (size > 0)
	{
		f = 0;
		while (f < size)
		{
			c = 0;
			while (c < size)
			{
				_putchar(35);
				c++;
			}
			_putchar('\n');
			f++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
