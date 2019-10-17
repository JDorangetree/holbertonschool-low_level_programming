#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory using
 * @nmemb: first string
 * @size: second string
 *
 * Description: allocates memory using
 * Return: a pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *matriz;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	matriz = malloc((size * nmemb));
	if (matriz == 0)
		return (NULL);
	n = 0;
	while (n < size * nmemb)
	{
		matriz[n] = 0;
		n++;
	}
	return (matriz);
}
