#include "holberton.h"
/**
 *_isupper - checks a character
 *
 *@c: parameter
 * Description: This checks for uppercase charater
 * Return: 1 Value if uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
