#include "lists.h"
/**
 * free_list - adds a new node at the beginning
 * @head: Head
 *
 * Description: adds a new node at the beginning
 * of a list_t list.
 * Return: The number of nodes
 */
void free_list(list_t *head)
{
	list_t *iterator_next;

	iterator_next = head;
	while (iterator_next->next != NULL)
	{
		iterator_next = head;
		free(iterator_next->str);
		head = iterator_next->next;
		free(iterator_next);
	}
	free(iterator_next->str);
	free(iterator_next);
	free(head);
}
