#include <stdio.h>
/**
 * main - Accept empty value
 * write - Screen information
 * @void: Description of a empty parameter
 *
 * Description: This is going print us the alphabet in lowercase
 * Return: 0 Value if it works
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	{
		putchar('\n');
	}
	return (0);
}
