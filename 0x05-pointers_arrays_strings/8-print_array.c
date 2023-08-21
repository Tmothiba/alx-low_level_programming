#include "main.h"
#include <stdio.h>
/**
 * print_array - printing elements in an array
 * @a: character,pointer
 * @n: element in array
 * Return: 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
		printf(", ");
		}
	}
	printf("\n");
}
