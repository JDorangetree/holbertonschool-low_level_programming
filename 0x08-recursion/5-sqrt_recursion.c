#include "holberton.h"

/**
 * _sqrt_auxiliar - natural square root
 * @x: pisible root
 * @n: number for root
 *
 * Description: natural square of root of a number
 * Return: root
 */
int _sqrt_auxiliar(int x, int n)
{
	int root;

	if (x * x > n)
	{
		root = -1;
	}
	else if (x * x == n)
	{
		root = x;
	}
	else
	{
		root = (_sqrt_auxiliar((x + 1), n));
	}
	return (root);
}


/**
 * _sqrt_recursion - natural square root
 * @n: number for a root
 *
 * Description: natural square of root of a number
 * Return: root
 */
int _sqrt_recursion(int n)
{
	int y;
	{
		y = _sqrt_auxiliar(1, n);
	}
	return (y);
}
