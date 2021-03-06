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
	dlistint_t *tmp = *h, *node, *i_node = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	node = ((dlistint_t *)malloc(sizeof(dlistint_t)));
	if (node == NULL)
		return (NULL);
	node->n = n;
	while (tmp)
		tmp = tmp->next, i++;
	i_node = *h;
	if (idx == 0 && i == 0)
	{
		node->next = NULL, *h = node, node->prev = NULL;
		return (node);
	}
	if (idx < i)
	{
		if (idx == 0)
		{
			node->next = *h, node->prev = NULL, (*h)->prev = node;
			*h = node;
		} else
		{
			while (idx > 1)
				i_node = i_node->next, idx--;
			tmp = i_node->next, i_node->next = node;
			node->next = tmp, tmp->prev = node, node->prev = i_node;
		} }
	if (idx - i == 0)
	{
		while (i > 1)
			i_node = i_node->next, i--;
		i_node->next = node, node->prev = i_node, node->next = NULL;
	} else
		return (NULL);
	return (node);
}
