#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using
 * @b: size
 *
 * Description: allocates memory using
 * Return: a pointer to the array
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (!str)
	{
		exit(98);
	}
	return (str);
}
