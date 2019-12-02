#include "lists.h"
/**
 * sum_listint - deletes the head
 * @head: head
 *
 * Description: return the sum of a integer of
 *  a listint_t linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *node_iterator;
	int sum;

	if (head == NULL)
		return (0);
	node_iterator = head;
	while (head)
	{
		sum = sum + node_iterator->n;
		head = head->next;
		node_iterator = head;
	}
	return (sum);
}
