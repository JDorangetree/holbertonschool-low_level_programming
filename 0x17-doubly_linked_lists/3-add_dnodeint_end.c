#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: double pointer to a header of the linked list
 * @n: data of node
 *
 * Return: new node at the beggining of a list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = ((dlistint_t *)malloc(sizeof(dlistint_t)));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;
		(*head)->next = new_node;
		new_node->prev = *head;
	}
	return (new_node);
}
