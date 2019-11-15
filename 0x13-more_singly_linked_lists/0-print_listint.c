#include "lists.h"
/**
 * print_listint - Prints all the elements of a list
 * @h: Char pointer
 *
 * Description: Prints all the elements
 * of a list_t list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d", (*h).n);
		h = (*h).next;
		i++;
	}
	printf("%d", (*h).n);
	return (i);
}
