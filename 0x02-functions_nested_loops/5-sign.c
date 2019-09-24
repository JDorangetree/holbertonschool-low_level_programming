#include "holberton.h"
/**
 * print_sign -  Determine if a character is a letter.
 * @n: The evaluated number
 *o
 * Description: This prints signs  if character is a letter
 * lowercase or uppercase
 * Return: 1 Value if it lowercase
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar(45);
			return (-1);
		}
		else
		{
			_putchar(48);
			return (0);
		}
	}
}
