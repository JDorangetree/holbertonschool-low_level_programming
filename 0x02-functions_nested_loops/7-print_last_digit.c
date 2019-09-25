#include "holberton.h"
/**
 * print_last_digit -  Determine the absolute value of an integer.
 * @n: The evaluated input
 * Description: This prints absolute value
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n >= 0)
	{
		x = n % 10;
		_putchar (x + 48);
	}
	else
	{
		x = -1 * (n % 10);
		_putchar (x + 48);
	}
	return (x);
}
