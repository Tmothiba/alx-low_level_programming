#include <stdio.h>
/**
 * main - printing hexadecimals
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int decnum = 0;
	char albet = 'a';

	for (decnum = 0; decnum <= 9; decnum++)
	{
		putchar('0' + decnum);
	}
	for (albet = 'a'; albet <= 'z'; albet++)
	{
		if (albet == 'g')
		{
			break;
		}
		putchar(albet);
	}
	putchar('\n');
	return (0);
}
