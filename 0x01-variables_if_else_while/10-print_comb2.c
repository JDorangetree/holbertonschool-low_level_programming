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
	int n;
	int m;

	m = 0;
	while (m <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			putchar(m + '0');
			putchar(n + '0');
			if (m < 9 || n != 9)
			{
				putchar(44);
				putchar(32);
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}.
