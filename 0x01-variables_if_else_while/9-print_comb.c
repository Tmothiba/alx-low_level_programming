#include <stdio.h>
/**
 * main - printing combinations of numbers
 *
 * Return: Always 0 (Succecc)
 *
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
		putchar(',');
		putchar('\t');
	}
	putchar('\n');
	return (0);
}
