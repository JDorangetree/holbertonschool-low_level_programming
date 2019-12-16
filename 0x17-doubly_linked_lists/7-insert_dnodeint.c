#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to header of the linked list
 * @idx: index of the node that should be added
 * @n: data of node
 *
 * Return: the sum of all node data
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_node, *iterator_node;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	new_node = ((dlistint_t *)malloc(sizeof(dlistint_t)));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n, tmp = *h;
	while (tmp)
		tmp = tmp->next, i++;
	iterator_node = *h;
	if (idx < i)
	{
		if (idx == 0)
		{
			*h = new_node;
			new_node->next = iterator_node, iterator_node->prev = new_node;
		}
		else
		{
			while (idx > 1)
				iterator_node = iterator_node->next, idx--;
			tmp = iterator_node->next;
			iterator_node->next = new_node;
			new_node->next = tmp, tmp->prev = new_node;
			new_node->prev = iterator_node;
		}
	} i--;
	if (idx - i == 1)
	{
		while (i > 0)
			iterator_node = iterator_node->next, i--;
		iterator_node->next = new_node;
		new_node->prev = iterator_node;
		new_node->next = NULL;
	}
	else
		return (NULL);
	return (new_node);
}
