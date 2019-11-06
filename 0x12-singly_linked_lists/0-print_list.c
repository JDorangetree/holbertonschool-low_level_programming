#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print a list_t structure
 * @h: header of the linked list to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		n++;
	}
	return (n);
}
