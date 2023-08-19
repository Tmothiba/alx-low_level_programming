#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print numbers from 0 to 9, except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if ((num == 2) || (num == 4))
		{
			continue;
		}
	putchar(num + '0');
	}
	putchar('\n');
}
