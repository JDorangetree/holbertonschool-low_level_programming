#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: head
 *
 * Description: Frees a listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *node_iterator;

	if (!head)
		return;
	while (*head)
	{
		node_iterator = (**head).next;
		free(*head);
		*head = node_iterator;
	}
}
