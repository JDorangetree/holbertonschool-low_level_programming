#include "holberton.h"
/**
 * string_toupper - compare two string
 * @s: array to upper
 *
 * Description: reverses the content of an array
 * Return: array upper
 */
char *string_toupper(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	n--;
	while (n >= 0)
	{
		if (s[n] <= 122 && s[n] >= 97)
		{
			s[n] = s[n] - 32;
		}
		n--;
	}
	return (s);
}
