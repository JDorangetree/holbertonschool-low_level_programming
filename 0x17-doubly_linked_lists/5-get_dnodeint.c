#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list.
 * @head: pointer to header of the linked list to print
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	while (index > 0)
	{
		head = head->next;
		if (head->next == NULL)
			return (NULL);
		index--;
	}
	return (head);
}
