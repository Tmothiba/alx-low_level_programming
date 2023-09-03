#include "main.h"
/**
 * _sqrt_recursion- calculates the square root of a number.
 *
 * @n: int to be squared
 * Return: -1 if n does not have a square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square(n, 0));
}
/**
 * square- recurses to find the square root of a number.
 * @n: number to calculate the square root for.
 * @i: counter or interator for the square.
 * Return: int
 */
int square(int n, int i)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	return (square(n, i + 1));
}
