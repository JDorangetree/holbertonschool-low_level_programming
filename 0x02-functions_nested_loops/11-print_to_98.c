#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 -  print all naturals number from n to 98.
 *@n: from to count
 * Description: print all natural number from n to 98
 */
void print_to_98(int n)
{
	int cont;

	if (n < 98)
	{
		for (cont = n; cont < 98; cont++)
		{
			printf("%d, ", cont);
		}
		printf("98\n");
	}
	else if (n > 98)
	{
		for (cont = n; cont > 98; cont--)
		{
			printf("%d, ", cont);
		}
		printf("98\n");
	}
	else
	{
		printf("98\n");
	}
}
