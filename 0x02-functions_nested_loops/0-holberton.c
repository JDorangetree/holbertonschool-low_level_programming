#include "holberton.h"
/**
 * main - Accept empty value
 * _putchar - Print characters one by one
 * @void: Description of a empty parameter
 *
 * Description: This is going to print Holberton
 * Return: 0 Value if it works
 */
int main(void)
{
	int m;
	char y[9] = "Holberton";

	while (m < 9)
	{
		_putchar(y[m]);
		m++;
	}
	_putchar('\n');
	return (0);
}
