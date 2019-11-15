#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * of a list
 * @head: head
 * @n: first element of a node
 *
 * Description: adds a new node at the end
 * of a listint_t list
 * Return: The addres of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *node_iterator;

	new_node = ((listint_t *)malloc(sizeof(listint_t)));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		node_iterator = *head;
		while (node_iterator->next != NULL)
			node_iterator = node_iterator->next;
		node_iterator->next = new_node;
	}
	return (new_node);
}
