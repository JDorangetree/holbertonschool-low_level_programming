#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds an element to the beginnig of the list
 * @head: Address to the head of the list
 * @str: String to add
 *
 * Return: The address of the last element added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	while (str[i] != '\0')
		i++;

	new_node = ((list_t *)malloc(sizeof(list_t)));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = i;
	if (head == NULL)
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
