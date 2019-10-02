#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - Prints elements of an array
 * @dest: The evaluated input
 * @src: print lentght input
 *
 * Description: Prints n elements of an array
 * Return: n value
 */
char *_strcpy(char *dest, char *src);
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	printf("\n");
}
