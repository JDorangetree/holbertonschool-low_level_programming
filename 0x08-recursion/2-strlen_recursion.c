#include "holberton.h"
/**
 * _strlen_recursion - return the lenght of a string
 * @s: pointer to char
 *
 * Description: lenght of a string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int x;

	x = 0;
	if (*s == '\0')
	{
		x = 0;
	}
	else
	{
		x = 1 + _strlen_recursion(s + 1);
	}
	return (x);
}
