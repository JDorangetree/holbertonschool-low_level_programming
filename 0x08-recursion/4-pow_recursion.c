#include "holberton.h"
/**
 * _pow_recursion - return the lenght of a string
 * @x: give base
 * @y: power
 *
 * Description: value of x raised to the power y
 * Return: pow
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
	{
		pow = -1;
	}
	else
	{
		if (y == 0)
		{
			pow = 1;
		}
		else
		{
			pow = x * _pow_recursion(x, (y - 1));
		}
	}
	return (pow);
}
