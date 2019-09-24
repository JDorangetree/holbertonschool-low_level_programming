#include "holberton.h"
/**
 * _isalpha -  Determine if a character is a letter.
 * @c: The evaluated letter
 *o
 * Description: This prints 1 if character is a letter lowercase or uppercase
 * Return: 1 Value if it lowercase
 */
int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
