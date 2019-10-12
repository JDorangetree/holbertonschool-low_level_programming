#include "holberton.h"
/**
 * _strncpy - copy a string
 * @dest: string to recive copy
 * @src: string to copy
 * @n: n bytes to copy
 *
 * Description: copy a strings
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
