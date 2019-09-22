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
	int x;

	m = 48;
	x = 8;
	while (m <= 57)
	{
		n = (57 - x);
		while (n <= 57)
		{
			putchar(m);
			putchar(n);
			if (m <= 55 || n != 57)
			{
				putchar(44);
				putchar(32);
			}
			n++;
		}
		m++;
		x--;
	}
	putchar('\n');
	return (0);
}
