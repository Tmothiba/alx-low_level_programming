#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - pointer that adds a new node to the beginning of a list
 * @head: double pointer to the list_t
 * @str: new string
 * Return: address of new element or NULL if fails
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
	{
		length++;
	}
	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
