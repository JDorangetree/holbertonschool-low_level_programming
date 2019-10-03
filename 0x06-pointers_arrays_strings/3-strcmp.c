#include "holberton.h"
/**
 * _strcmp - compare two string
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 *
 * Description: compares two string
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i > j)
	{
		return (15);
	}
	if (i < j)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
