#include "main.h"
#include <stdio.h>
/**
 * swap_int - swapping the value of an int
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temporary_variable = *a;

	*a = *b;
	*b = temporary_variable;
}
