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
	dlistint_t *tmp, *new_node, *iterator_node;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	new_node = new_malloc(), new_node->n = n, tmp = *h;
	while (tmp)
		tmp = tmp->next, i++;
	iterator_node = *h, new_node->prev = NULL;
	if (idx == 0 && i == 0)
	{
		new_node->next = NULL, *h = new_node;
		return (new_node);
	}
	if (idx < i)
	{
		if (idx == 0)
		{
			new_node->next = *h;
			if (*h)
				(*h)->prev = new_node;
			*h = new_node;
		} else
		{
			while (idx > 1)
				iterator_node = iterator_node->next, idx--;
			tmp = iterator_node->next, iterator_node->next = new_node;
			new_node->next = tmp, tmp->prev = new_node, new_node->prev = iterator_node;
		} } i--;
	if (idx - i == 1)
	{
		while (i > 0)
			iterator_node = iterator_node->next, i--;
		iterator_node->next = new_node, new_node->prev = iterator_node;
		new_node->next = NULL;
	} i++;
	if (idx - i >= 1)
		return (NULL);
	return (new_node);
}
