#include "main.h"
#include <stdio.h>
/**
 * reverse_array: reverses the contents of an array of integers
 * @a: pointer to an int
 * @n: integer, number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
		for (i = n - 1; i >= 0 ; i--)
		{
		printf("%d", a[i]);
		if ( a[i] == 0)
		{
			break;
		}
		printf(", ");
		}
		printf("\n");
}
