#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - print name of file
 * @str: size of array
 *
 * Description: return a pointer to a newly allocated space
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int size;
	int i;
	char *src;

	size = 0;
	while (str[size] != '\0')
		size++;

	src = malloc(sizeof(char) * size);
	if (!src)
		return (NULL);
	i = 0;
	while (i < size)
	{
		src[i] = str[i];
		i++;
	}
	return (src);
}
