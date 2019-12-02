#include "lists.h"
/**
 * pop_listint - deletes the head
 * @head: head
 *
 * Description: Deletes the head node of a
 * listint_t linked list, and returns the
 * head node’s data (data).
 * Return: data of delete node
 */
int pop_listint(listint_t **head)
{
	listint_t *node_iterator;
	int data;

	if (*head == NULL)
		return (0);
	node_iterator = (**head).next;
	(**head).next = NULL;
	data = (**head).n;
	free(*head);
	*head = node_iterator;
	return (data);
}
