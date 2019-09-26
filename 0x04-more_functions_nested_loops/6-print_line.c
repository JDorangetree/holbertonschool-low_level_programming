#include "holberton.h"
/**
 * print_line - Draws a straight line
 *
 *@n: numbers of times the character
 * Description: This draws a stright line
 * Return: 0 Value if it works
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n >= 0)
		{
			_putchar(95);
			n--;
		}
	}
	_putchar('\n');
}
