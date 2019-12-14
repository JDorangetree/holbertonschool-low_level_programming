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
	dlistint_t *new_node, *tmp;

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
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
		new_node->next = NULL;
		new_node->prev = tmp;
	}
	return (new_node);
}
