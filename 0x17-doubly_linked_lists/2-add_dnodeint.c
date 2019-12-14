#include "lists.h"
/**
 * add_dnodeint - add node at the beggining
 * @head: header of the linked list to print
 * @n: data of node
 *
 * Return: new node at the beggining of a list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = ((dlistint_t *)malloc(sizeof(dlistint_t)));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
		new_node->prev = NULL;
		*head = new_node;
	}
	return (new_node);
}
