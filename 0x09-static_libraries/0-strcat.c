#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to recive append
 * @src: string to append
 *
 * Description: concatenate two strings
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		*(dest + i) = *(src + j);
		j++;
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
