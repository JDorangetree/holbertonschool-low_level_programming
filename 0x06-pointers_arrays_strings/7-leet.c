#include "holberton.h"
/**
 * leet - Encodes a string into 1337g
 * @p: First input pointer
 *
 * Description: Encodes a string into 1337
 * Return: char
 */

char *leet(char *p)
{
	int n = 0, j;
	char letter[11] = "AEOTLaeotl";
	char num[11] = "4307143071";

	while (p[n] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (p[n] == letter[j])
				p[n] = num[j];
			j++;
		}
		i++;
	}
	return (p);
}
