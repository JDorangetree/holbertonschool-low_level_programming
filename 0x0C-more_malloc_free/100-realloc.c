#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - print name of file
 * @ptr: size of array
 * @old_size: old size
 * @new_size: new size
 *
 * Description: create an array of char
 * Return: a pointer to the array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *src, *reserve;
	unsigned int n;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	src = malloc(new_size);
	if (src == 0)
	{
		return (NULL);
	}
	if (ptr == 0)
	{
		return (src);
	}
	reserve = ptr;
	n = 0;
	while (n < old_size)
	{
		src[n] = reserve[n];
		n++;
	}
	free(ptr);
	return (src);
}
