#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc- allocate memory for an array, using malloc.
 * @nmemb: number of elements
 * @size:size of bytes
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	size_t total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = (size_t)nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, total_size);
	return (ptr);
}
