#include "main.h"
/**
 * print_numbers - printing numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
}
