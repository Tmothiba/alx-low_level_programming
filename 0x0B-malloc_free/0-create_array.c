#include "main.h"
#include <stdlib.h>
/**
 * create_array- creates an array of chars
 * @size: size of int
 * @c: char to be created.
 * Return: pointer to an array or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc((size + 1) * sizeof(char));
	unsigned int i;

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
