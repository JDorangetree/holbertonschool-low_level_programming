#include "lists.h"
/**
 * print_dlistint - Print a dlistint_t structure
 * @h: header of the linked list to print
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	printf("%d\n", h->n);
	i++;
	return (i);
}
