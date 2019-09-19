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

	for (n = 122; n >= 97; n--)
	{
		putchar(n);
	}
	{
		putchar('\n');
	}
	return (0);
}
