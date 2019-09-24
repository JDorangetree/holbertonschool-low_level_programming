#include "holberton.h"
/**
 * print_alphabet_x10 - Print the alphabet 10 times in a row
 * _putchar - Prints characters one by one
 * @void: Description of a empty parameter
 *
 * Description: This prints the alphabet 10 times
 * Return: 0 Value if it works
 */
void print_alphabet_x10(void)
{
	int m;
	int n;

	n = 0;
	while (n <= 9)
	{
		m = 'a';
		while (m <= 'z')
		{
			_putchar(m);
			m++;
		}
		n++;
		_putchar('\n');
	}
}
