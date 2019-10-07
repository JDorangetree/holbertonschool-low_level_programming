#include "holberton.h"
/**
 * _memset - compare two string
 * @b: new valor
 * @n: pisition
 * @s: pointer to buffer
 *
 * Description: fill memory with a constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*s = b;
		i++;
		s++;
	}
	s = 0;
	return (s);
}
