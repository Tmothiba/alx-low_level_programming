#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end -adds a new node at the end of a listint_t list
 * @head: pointer to the first element in the list.
 * @n: data to be inserted in the new element
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	temp = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	return (newNode);
}
