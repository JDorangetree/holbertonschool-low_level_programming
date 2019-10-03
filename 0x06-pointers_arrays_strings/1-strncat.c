#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to recive append
 * @src: string to append
 * @n: n bytes to append
 *
 * Description: concatenate two strings
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (n > 0)
	{
		*(dest + i) = *(src + j);
		j++;
		i++;
		n--;
	}
	return (dest);
}
