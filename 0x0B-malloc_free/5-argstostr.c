#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - print name of file
 * @ac: matrix
 * @av: columns
 *
 * Description: concatenate all the arguments of a program
 * Return: a pointer to the concatenate arguments
 */
char *argstostr(int ac, char **av)
{
	char *matrix;
	int n, j, x, m, k;

	if (ac == 0)
		return (0);
	if (av == 0)
		return (0);

	n = 0;
	x = 0;
	while (n < ac)
	{
		j = 0;
		while (av[n][j])
			j++;
		n++;
		x = x + j + 1;
	}
	matrix = malloc((x + 1) * sizeof(char));
	if (matrix == 0)
		return (0);
	m = 0;
	k = 0;
	while (m < ac)
	{
		j = 0;
		while (av[m][j])
		{
			matrix[k] = av[m][j];
			k++;
			j++;
		}
		m++;
		matrix[k] = '\n';
		k++;
	}
	matrix[k] = '\0';
	return (matrix);
}
