#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - print name of file
 * @width: first string
 * @height: second string
 *
 * Description: concatenate two strings
 * Return: a pointer to the concatenate string
 */
int **alloc_grid(int width, int height)
{
	int **matriz;
	int n, m;

	if (width < 1 || height < 1)
		return (NULL);

	matriz = malloc(sizeof(*matriz) * height);
	if (matriz == NULL)
		return (NULL);
	n = 0;
	while (n < height)
	{
		matriz[n] = malloc(sizeof(**matriz) * width);
		if (matriz[n] == NULL)
		{
			for (n--; n >= 0; n--)
			{
				free(matriz[n]);
			}
			free(matriz);
			return (NULL);
		}
		m = 0;
		while (m < width)
		{
			matriz[n][m] = 0;
			m++;
		}
		n++;
	}
	return (matriz);
}
