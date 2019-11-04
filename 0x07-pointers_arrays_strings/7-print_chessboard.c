#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - Locates a substring
 * @a: pointer to multidimensinal array
 *
 * Description: Locates a substring
 * Return: char
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			putchar(a[i][j]);
			j++;
		}
		i++;
		putchar('\n');
	}
}
