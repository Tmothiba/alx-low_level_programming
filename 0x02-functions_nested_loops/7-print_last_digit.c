#include "main.h"
/**
 * print_last_digit - this prints the last digit of a number
 *
 * @c: number to be printed
 * Return: last value of a digit
 */
int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
