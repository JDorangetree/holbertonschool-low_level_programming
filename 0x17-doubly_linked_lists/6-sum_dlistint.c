#include "lists.h"
/**
 * sum_dlistint - returns the nth node of a dlistint_t linked list.
 * @head: pointer to header of the linked list to add
 *
 * Return: the sum of all node data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
