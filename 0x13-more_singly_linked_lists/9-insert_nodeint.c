#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to first node on the linked list
 * @idx: index where the new node is added
 * @n: data to insert
 * Return: pointer to new node, or NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (num = 0; temp && num < idx; num++)
	{
		if (num == idx - 1)
		{
		new->next = temp->next;
		temp->next = new;
		return (new);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
