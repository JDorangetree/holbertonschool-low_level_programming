#include "lists.h"
/**
 * dlistint_len - Print a dlistint_t structure
 * @h: header of the linked list to print
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h)
	{
		while (h->next != NULL)
		{
			h = h->next;
			i++;
		}
	}
	i++;
	return (i);
}
