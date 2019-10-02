#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Prints elements of an array
 * @a: The evaluated input
 * @n: print lentght input
 *
 * Description: Prints n elements of an array
 * Return: n value
 */
void print_array(int *a, int n)
{
	int j = 0;

	while (j < n)
	{
		printf("%d", *(a + j));
		if (a[j] != '\0' && j < n - 1)
			printf(", ");
		j++;
	}
	printf("\n");
}
