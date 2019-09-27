#include "holberton.h"
/**
 * print_triangle - Draws a triangle line in the terminal
 * _putchar - Prints characters one by one
 * @size: Parameter of size
 *
 * Description: Draws a triangle line in the terminal
 * Return: 0 Value if it works
 */
void print_triangle(int size)
{
	int f;
	int c;

	if (size > 0)
	{
		f = 1;
		while (f <= size)
		{
			c = 1;
			while (c <= size)
			{
				if (c <= size - f)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(35);
				}
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
