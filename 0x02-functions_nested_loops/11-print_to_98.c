#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 -  adds two integers.
 *@n: from to count
 * Description: print all natural number from n to 98
 * Return: return the result
 */
void print_to_98(int n)
{
	int contador;

	if (n < 98)
	{
		for (contador = n; contador < 98; contador++)
		{
			printf("%d, ", contador);
		}
		printf("98\n");
	}
	else
	{
		if (n > 98)
		{
			for (contador = n; contador > 98; contador--)
			{
				printf("%d, ", contador);
			}
			printf("98\n");
		}
		else
		{
			printf("98\n");
		}
	}
}
