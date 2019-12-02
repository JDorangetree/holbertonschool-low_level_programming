#include "lists.h"
/**
 * get_nodeint_at_index - deletes the head
 * @head: head
 * @index: index of a node
 *
 * Description: return the node of a
 * listint_t linked list, according to an index
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_iterator;
	unsigned int count = 0;

	if (!head)
		return (NULL);
	node_iterator = head;
	while (head)
	{
		head = head->next;
		count++;
	}
	while (index > 0)
	{
		node_iterator = node_iterator->next;
		index--;
	}
	return (node_iterator);
}
