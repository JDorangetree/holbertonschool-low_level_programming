#include "holberton.h"
/**
 * rev_string -  reverse a string.
 *@s: string for print
 * Description: return a string in reverse
 * Return: return the result
 */
void rev_string(char *s)
{
	int i;
	int n;
	char reserve;
	int mitad;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	mitad = (i / 2);
	n = 0;
	while (i >= mitad)
	{
		reserve = s[i];
		s[i] = s[n];
		s[n] = reserve;
		i--;
		n++;
	}
}
