#include <stdio.h>
/**
 * main - Accept empty value
 * write - Screen information
 * @void: Description of a empty parameter
 *
 * Description: This is going print us all single digit numbers of base 10
 * Return: 0 Value if it works
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n <= 56)
		{
			putchar(44);
			putchar(32);
		}
	}
	{
		putchar('\n');
	}
	return (0);
}
