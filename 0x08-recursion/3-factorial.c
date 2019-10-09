#include "holberton.h"
/**
 * factorial - return the lenght of a string
 * @n: given number
 *
 * Description: returns the factorial of a given number
 * Return: value of factorial
 */
int factorial(int n)
{
	int number;

	if (n == 0)
	{
		number = 1;
	}
	else
	{
		if (n < 0)
		{
			number = -1;
		}
		else
		{
			number = n * factorial(n - 1);
		}
	}
	return (number);
}
