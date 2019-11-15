#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * of a list
 * @head: head
 * @n: first element of a node
 *
 * Description: adds a new node at the beginning
 * of a listint_t list
 * Return: The addres of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = ((listint_t *)malloc(sizeof(listint_t)));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
