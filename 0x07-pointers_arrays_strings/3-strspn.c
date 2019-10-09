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
	int i;
	int j;
	int counter;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		counter = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				counter++;
			}
			j++;
		}
		if (counter == 0)
		{
			break;
		}
		i++;
	}
	return(i);
}
