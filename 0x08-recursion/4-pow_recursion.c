#include "main.h"
#include <math.h>

/**
 * _pow_recursion- returns value of x to the power y.
 * @x: base int
 * @y: power int
 * Return: -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
