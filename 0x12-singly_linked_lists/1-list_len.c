#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of element of the list
 * @h: header of the linked list to count the objects
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
