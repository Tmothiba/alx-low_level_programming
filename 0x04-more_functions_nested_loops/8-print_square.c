#include "main.h"
/**
 * print_square - prints n squares
 * @n: number of times
 *
 * Return: void
 */
void print_square(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
		for (b = 0; b < n; b++)
		{
		_putchar(35);
		}
		_putchar('\n');
		}
	}
}

