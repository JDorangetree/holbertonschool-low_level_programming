#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - print name of file
 * @min: size of array
 * @max: character
 *
 * Description: create an array of char
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
	int *str;
	int i, size;

	size = max - min + 1;
	if (min > max)
		return (NULL);
	str = malloc(sizeof(int) * size);
	if (!str)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
