#include "holberton.h"
/**
 *print_numbers - Print the numbers from 0 to 9
 *
 *@void: print numbers
 * Description: This prints number form 0 to 9
 * Return: 0 Value if it works
 */
void print_numbers(void)
{
	int n;

	n = 0;
	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
