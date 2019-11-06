#include "lists.h"
/**
 * add_node_end - adds a new node at the beginning
 * @head: Head
 * @str: Char pointer
 *
 * Description: adds a new node at the beginning
 * of a list_t list.
 * Return: The number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node, *iterator_next;
	int i = 0;

	while (str[i] != '\0')
		i++;
	last_node = (malloc(sizeof(list_t)));
	if (last_node == NULL)
		return (NULL);
	(*last_node).str = strdup(str);
	(*last_node).len = i;
	if (*head == NULL)
	{
		(*last_node).next = NULL;
		*head = last_node;
	}
	else
	{
		iterator_next = *head;
		while ((*iterator_next).next != NULL)
			iterator_next = (*iterator_next).next;
		(*iterator_next).next = last_node;
	}
	return (last_node);
}
