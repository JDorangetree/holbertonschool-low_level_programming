#include "holberton.h"
/**
 * _strchr - compare two string
 * @s: new valor
 * @c: pisition
 *
 * Description: fill memory with a constant byte
 * Return: s
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j <= i)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		j++;
	}
	return (0);
}
