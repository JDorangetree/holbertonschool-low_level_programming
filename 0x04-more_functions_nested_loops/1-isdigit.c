#include "holberton.h"
/**
 *_isdigit - Print characters one by one
 *
 *@c: input parameter
 * Description: checks for a digit
 * Return: 1 Value if is a digit
 * Return: 0 value if is not a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
