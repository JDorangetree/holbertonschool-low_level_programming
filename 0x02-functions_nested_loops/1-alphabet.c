#include <unistd.h>
#include "holberton.h"
/**
 * print_alphabet - print the alphabet in lowercase
 *_putchar - Print characters one by one
 *
 *@void: Description of a empty parameter
 * Description: This prints the alphabet
 * Return: 0 Value if it works
 */
void print_alphabet(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
