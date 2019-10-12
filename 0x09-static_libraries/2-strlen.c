#include "holberton.h"
/**
 * _strlen -  count length of a string.
 *@s: string for count
 * Description: return the lenght of a string
 * Return: return the result
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
