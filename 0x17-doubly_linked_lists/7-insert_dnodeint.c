#include "lists.h"
/**
 * new_malloc - inserts a new node at a given position.
 *
 * Return: the sum of all node data
 */
dlistint_t *new_malloc()
{
	dlistint_t *node;

	node = ((dlistint_t *)malloc(sizeof(dlistint_t)));
	if (node == NULL)
		return (NULL);
	return (node);
}
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
	node = new_malloc(), node->n = n, tmp = *h;
	if (!node)
		return (NULL);
	while (tmp)
		tmp = tmp->next, i++;
	i_node = *h, node->prev = NULL;
	if (idx == 0 && i == 0)
	{
		node->next = NULL, *h = node;
		return (node);
	}
	if (idx < i)
	{
		if (idx == 0)
		{
			node->next = *h;
			if (*h)
				(*h)->prev = node;
			*h = node;
		} else
		{
			while (idx > 1)
				i_node = i_node->next, idx--;
			tmp = i_node->next, i_node->next = node, node->next = tmp, tmp->prev = node;
			node->prev = i_node;
		} } i--;
	if (idx - i == 1)
	{
		while (i > 0)
			i_node = i_node->next, i--;
		i_node->next = node, node->prev = i_node, node->next = NULL;
	} i++;
	if (idx - i >= 1)
		return (NULL);
	return (node);
}
