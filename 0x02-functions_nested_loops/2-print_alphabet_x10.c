#include "main.h"

/**
 * print_alphabet_x10- check the code.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphab;
	int i = 0;

	while (i < 10)
	{
	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		_putchar(alphab);
	}
	_putchar('\n');
	i++;
	}
}
