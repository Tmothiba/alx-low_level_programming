#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: the size of the array
 * @cmp: function pointer
 * Return: index of element that matches cmp or -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((size < 1) || (array == NULL) || (cmp == NULL))
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
