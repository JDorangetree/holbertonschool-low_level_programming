#include "holberton.h"
/**
 * jack_bauer -  Print every second and minute of the day.
 * Description: This prints absolute value
 * Return: Value of the last digit
 */
void jack_bauer(void)
{
	int m;
	int n;
	int x;
	int y;

	m = 48;
	while (m <= 50)
	{
		n = 48;
		while (n <= 57)
		{
			x = 48;
			while (x <= 53)
			{
				y = 48;
				while (y <= 57)
				{
					if (m != '2' || (m <= '2' && n <= '3'))
					{
						_putchar(m);
						_putchar(n);
						_putchar(':');
						_putchar(x);
						_putchar(y);
						_putchar('\n');
					}
					y++;
				}
				x++;
			}
			n++;
		}
		m++;
	}
}
