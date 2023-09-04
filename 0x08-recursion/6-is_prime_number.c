#include "main.h"
/**
 * is_prime_number- returns 1 if input is prime, otherwise it returns 0.
 * @n: integer to be checked.
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}
/**
 * prime- calculates recursively if a number is prime.
 * @n: number to calculate.
 * @i: iterator
 * Return: int.
 */
int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}
