#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list.
 * @head: pointer to header of the linked list to print
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
		while (head->next != NULL)
			head = head->next;
		while (head->prev)
		{
			tmp = head;
			head = tmp->prev;
			free(tmp);
		}
		free(head);
	}
}
