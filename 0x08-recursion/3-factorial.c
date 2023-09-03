#include "main.h"
#include <stdio.h>
/**
 * factorial- returns factorial of a given number
 * @n: given number to be factorised.
 * Return: int
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n  < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
