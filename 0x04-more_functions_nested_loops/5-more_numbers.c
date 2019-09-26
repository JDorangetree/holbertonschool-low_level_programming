#include "holberton.h"
/**
 * more_numbers - Print the numbers from 0 to 14
 *
 *@void: print numbers
 * Description: This prints number form 0 to 14 10 times
 * Return: 0 Value if it works
 */
void more_numbers(void)
{
	int m;
	int veces;

	for (veces = 0; veces <= 9; veces++)
	{
		for (m = 0 ; m <= 14; m++)
		{
			if (m >= 10)
			{
				_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
