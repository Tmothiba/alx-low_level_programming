#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in linked list.
 * @head: first node on a linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
