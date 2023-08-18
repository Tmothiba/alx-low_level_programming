#include "main.h"
/**
 * times_table - printing 9 times table
 *
 * Return: always 0
 */
void times_table(void)
{
	int a, b, c, d, e;

	/* for as long as a <= 9, add 1 to a */
	for (a = 0; a <= 9; a++)
	{
	/* nested for loop*/
	for (b = 0; b <= 9; b++)
	{
	/* after passing the condition for the nested loop, multiply the results*/
	c = a * b;
	if (c > 9)
	{
	d = c % 10;
	e = (c - d) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(e + '0');
	_putchar(d + '0');
	}
	else
	{
	if (b != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(c + '0');
	}
	}
	_putchar('\n');
	}
}
