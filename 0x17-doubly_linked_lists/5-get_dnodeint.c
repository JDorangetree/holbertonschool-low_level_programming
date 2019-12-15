#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to header of the linked list to print
 * @index: index to return node
 *
 * Return: Return: address to node or NULL if index does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	while (index > 0)
	{
		head = head->next, index--;
		if (head)
		{
			if ((index == 1) && (head->next == NULL))
				return (head);
		}
		else
			return (NULL);
	}
	return (head);
}
