#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - print name of file
 * @size: size of array
 * @c: character
 *
 * Description: create an array of char
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size <= 0)
	{
		return (0);
	}
	str = malloc(sizeof(char) * size);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
