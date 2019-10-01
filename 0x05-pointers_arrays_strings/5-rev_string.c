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

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	n = 0;
	while (n < i)
	{
		reserve = s[i];
		s[i] = s[n];
		s[n] = reserve;
		i--;
		n++;
	}
}
