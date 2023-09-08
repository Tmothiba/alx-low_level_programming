#include "main.h"
#include <stdlib.h>
/**
 * array_range- creates ordered array of integers.
 * @min: min alement in array
 * @max: maximum element in array
 * Return: pointer to an allocated memory
 */
int *array_range(int min, int max)
{
	int *ptr;
	int numElements, i;

	numElements = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(numElements * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= numElements; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
