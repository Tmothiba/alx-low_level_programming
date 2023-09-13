#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator- iterates through an array.
 * @array: pointer to an integer array
 * @action: pointer to int function
 * @size: size of an array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	void (*ptr)(int) = action;

	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		ptr(array[i]);
	}
}
