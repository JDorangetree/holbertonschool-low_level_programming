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
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*dest = src[i];
		i++;
		dest++;
	}
	dest = dest - n;
	return (dest);
}
