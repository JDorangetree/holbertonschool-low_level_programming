#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - compare two string
 * @s: new valor
 * @accept: pisition
 *
 * Description: fill memory with a constant byte
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (NULL);
}
