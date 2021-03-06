#include "lists.h"
/**
 * listint_len - Prints elements numbers of a list
 * @h: Char pointer
 *
 * Description: Prints numbers of elements
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = (*h).next;
		i++;
	}
	return (i);
}
