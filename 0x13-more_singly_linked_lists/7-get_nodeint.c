#include "lists.h"
/**
 * pop_listint - deletes the head
 * @head: head
 *
 * Description: Deletes the head node of a
 * listint_t linked list, and returns the
 * head node’s data (data).
 * Return: data of delete node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_iterator;
    unsigned int count = 0;

    if(!head)
        return(NULL);
    node_iterator = head;
    while (head)
    {
        head = head->next;
        count++;
    }
    if (index <= count)
    {
        while(index > 0)
        {
            node_iterator = node_iterator->next;
            index--;
        }
        return(node_iterator);
    }
    else
    {
        node_iterator = NULL;
        return(node_iterator);
    }
}