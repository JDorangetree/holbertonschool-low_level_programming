#include "holberton.h"
/**
 * times_table -  Print every second and minute of the day.
 * Description: This prints absolute value
 * Return: Value of the last digit
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
				if (columnas != 9)
				{
					_putchar(incremento + '0');
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				else
				{
					_putchar(incremento + '0');
				}
			}
			else
			{
				if (columnas != 9)
				{
					_putchar(((incremento) / 10) + '0');
					_putchar(((incremento) % 10) + '0');
					_putchar(44);
					_putchar(32);
				}
				else
				{
					_putchar(((incremento) / 10) + '0');
					_putchar(((incremento) % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}