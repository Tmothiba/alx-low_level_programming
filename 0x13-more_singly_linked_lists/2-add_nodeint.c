#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds new node at the beggining of a list.
 * @head: pointer to the first node on the list.
 * @n: data to insert in the node
 * Return: the address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}

