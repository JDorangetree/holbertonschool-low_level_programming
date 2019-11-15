#include "lists.h"
/**
 * free_listint - free a list
 * @head: head
 *
 * Description: Frees a listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *node_iterator;

	node_iterator = head;
	while (node_iterator->next != NULL)
	{
		head = head->next;
		free(node_iterator);
		node_iterator = head;
	}
	free(head);
}
