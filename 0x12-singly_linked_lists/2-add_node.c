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
	list_t *new_element;
	int j = 0;

	if (str == NULL)
		return (*head);

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);

	new_element->str = strdup(str);
	if (new_element->str == NULL)
	{
		free(new_element);
		return (NULL);
	}

	while (*(str + j) != '\0')
		j++;
	new_element->len = j;
	new_element->next = *head;
	*head = new_element;

	return (new_element);
}
