#include "main.h"
/**
 * print_alphabet - printing alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		_putchar(alphab);
	}
	_putchar('\n');
}
