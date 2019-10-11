#include "holberton.h"
/**
 * print_times_table - Prints the 9 times table, starting with 0
 * @n: The evaluated input
 *
 * Description: Prints the n times table, starting with 0
 */
void print_times_table(int n)
{
	int colum, filas, digit;

	if (n <= 15 && n >= 0)
	{
		for (filas = 0; filas <= n; filas++)
		{
			for (colum = 0; colum <= n; colum++)
			{
				digit = colum * filas;
				if (colum == 0)
					_putchar('0');
				else
				{
					_putchar(',');
					_putchar(' ');
				}
				if (digit <= 9 && colum != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(digit + '0');
				}
				if (digit >= 10 && digit < 100)
				{
					_putchar(' ');
					_putchar((digit / 10) + '0');
					_putchar((digit % 10) + '0');
				}
				if (digit >= 100)
				{
					_putchar((digit / 100) + '0');
					_putchar(((digit / 10) % 10) + '0');
					_putchar((digit % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
	else
		return;
}
