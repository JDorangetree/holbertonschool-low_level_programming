#include "holberton.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 * @void: The evaluated input
 *
 * Description: Prints the 9 times table, starting with 0
 * Return: 0 Value if it works
 */
void times_table(void)
{
	int filas, incremento, columnas;

	for (filas = 0; filas <= 9; filas++)
	{
		for (columnas = 0; columnas <= 9; columnas++)
		{
			incremento = (filas * columnas);
			if (incremento == 0 || incremento <= 9)
			{
				if (columnas != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(incremento + '0');
				}
				else
					_putchar(incremento + '0');
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(((incremento) / 10) + '0');
				_putchar(((incremento) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
