#include <stdio.h>
/**
 * main - printing all single digits of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
	}
	putchar('\n');
	return (0);
}
