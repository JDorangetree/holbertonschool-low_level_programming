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

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			break;
	}
	return (s1[i] - s2[i]);
}
