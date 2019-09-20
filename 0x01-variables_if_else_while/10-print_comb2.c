#include <stdio.h>
/**
 * main - Accept empty value
 * write - Screen information
 * @void: Description of a empty parameter
 * Description: This is going print us all single digit numbers of base 10
 * Return: 0 Value if it works
 */
int main(void)
{
	int n;
	int l;

	n = 48;
	while (n <= 57)
	{
		l = 48;
		while (l <= 57)
		{
			if (n != 57)
			{
				putchar(n);
				putchar(l);
				putchar(44);
				putchar(32);
			}
			else
			{
				if (l != 57)
				{
					putchar(n);
					putchar(l);
					putchar(44);
					putchar(32);
				}
				else
				{
					putchar(n);
					putchar(l);
				}
			}
			l++;
		}
		n++;
	}
	{
		putchar('\n');
	}
	return (0);
}
