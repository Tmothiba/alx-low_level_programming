#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to print
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int num, count = 0;
	unsigned long int cur;

	for (num = 63; num >= 0; num--)
	{
		cur = n >> num;
		if (cur & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}
