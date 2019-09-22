#include <stdio.h>
/**
 * main - Accept empty value
 * write - Screen information
 * @void: Description of a empty parameter
 * Description: This is going print us all numbers from 0 to 99
 * Return: 0 Value if it works
 */
int main(void)
{
	int m;
	int n;
	int j;
	int x;
	int y;

	m = 48;
	x = 8;
	while (m <= 55)
	{
		n = (57 - x);
		y = 7;
		while (n <= 56)
		{
			j = (57 - y);
			while (j <= 57)
			{
				if (m < n && n < j)
				{
					putchar(m);
					putchar(n);
					putchar(j);
					if (m < 55 || n != 56 || j != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
				j++;
			}
			n++;
			y--;
		}
		m++;
		x--;
	}
	putchar('\n');
	return (0);
}
