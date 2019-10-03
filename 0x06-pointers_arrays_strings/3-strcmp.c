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
	if (s1 != '\0')
	{
		return (*s1 - *s2);
	}
	else
	{
		return(0);
	}
}
