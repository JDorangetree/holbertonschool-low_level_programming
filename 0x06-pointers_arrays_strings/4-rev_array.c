#include "holberton.h"
/**
 * reverse_array - compare two string
 * @a: array to reverses
 * @n: numbers of elemnts of array
 *
 * Description: reverses the content of an array
 * Return: dest
 */
void reverse_array(int *a, int n)
{
	int j;
	int reserve;

	j = 0;
	n--;
	while (j < n)
	{
		reserve = *(a + j);
		*(a + j) = *(a + n);
		*(a + n) = reserve;
		n--;
		j++;
	}
}
