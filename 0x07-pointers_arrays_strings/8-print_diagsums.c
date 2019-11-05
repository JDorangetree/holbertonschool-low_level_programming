#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints sums of diag
 * @a: pointer to multidimensinal array
 * @size: size of array
 * Description: Locates a substring
 * Return: char
 */
void print_diagsums(int *a, int size)
{
	int i, sum_diag1, sum_diag2;

	i = 0;
	sum_diag1 = 0;
	sum_diag2 = 0;
	while (i < (size * size))
	{
		sum_diag1 = sum_diag1 + a[i];
		i = i + size + 1;
	}
	i = 0;
	while (i < (size * size) - 1)
	{
		sum_diag2 = sum_diag2 + a[i];
		i = i + size - 1;
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
