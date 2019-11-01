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

	if (h == NULL)
		return (0);
	else
		return (1 + list_len(h->next));

}
