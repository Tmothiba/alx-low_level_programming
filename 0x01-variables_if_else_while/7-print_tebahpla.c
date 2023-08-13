#include <stdio.h>
/**
 * main - printing last didit of a number
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char albet = 'z';

	for (albet = 'z'; albet >= 'a'; albet--)
	{
		putchar(albet);
	}
	putchar('\n');
	return (0);
}
