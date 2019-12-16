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
	dlistint_t *tmp, *node, *i_node;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	node = ((dlistint_t *)malloc(sizeof(dlistint_t)));
	if (node == NULL)
		return (NULL);
	node->n = n, tmp = *h;
	while (tmp)
		tmp = tmp->next, i++;
	i_node = *h;
	if (idx == 0 && i == 0)
	{
		node->next = NULL, *h = node;
		return (node);
	}
	if (idx < i)
	{
		if (idx == 0)
		{
			*h = node;
			node->next = i_node, i_node->prev = node, node->prev = NULL;
		} else
		{
			while (idx > 1)
				i_node = i_node->next, idx--;
			tmp = i_node->next, i_node->next = node;
			node->next = tmp, tmp->prev = node, node->prev = i_node;
		} } i--;
	if (idx - i == 1)
	{
		while (i > 0)
			i_node = i_node->next, i--;
		i_node->next = node, node->prev = i_node, node->next = NULL;
	} else
		return (NULL);
	return (node);
}
