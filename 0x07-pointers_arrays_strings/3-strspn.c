#include "holberton.h"
/**
 * _strspn - compare two string
 * @s: new valor
 * @accept: pisition
 *
 * Description: fill memory with a constant byte
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (s[i] != '\n')
	{
		i++;
	}
	j = 0;
	while (j <= i)
	{
		if (s[j] == accept[0])
		{
			return (j + 1);
		}
		j++;
	}
	return (j);
}
