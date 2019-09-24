#include "holberton.h"
/**
 * _islower(int c) -  Determine if a character is lowercase.
 * @c: The evaluated letter
 * Description: This prints 1 if character is lowercase
 * Return: 0 Value if it works
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
