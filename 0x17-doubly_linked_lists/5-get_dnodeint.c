#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list.
 * @head: pointer to header of the linked list to print
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (!head)
		return (NULL);
	tmp = head;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	if (index > (i -1))
		return (NULL);
		
	i = 0;
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
