#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: first node in the linked list
 * @index: index of the node returned
 * Return: pointer to the node or NULL upon failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *temp = head;

	while (temp && num < index)
	{
		temp = temp->next;
		num++;
	}
	return (temp ? temp : NULL);
}
