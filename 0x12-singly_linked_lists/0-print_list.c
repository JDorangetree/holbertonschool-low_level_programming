#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print a list_t list
 * @h: header of the linked list to print
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		printf("[%d] ", h->str == NULL ? 0 : h->len);
		printf(h->str == NULL ? "%p\n" : "%s\n", h->str);
		return (1 + print_list(h->next));
	}
}
