#include <stdio.h>
/**
 * main - printing last didit of a number
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char albet1, albet2;

	for (albet1 = 'a'; albet1 <= 'z'; albet1++)
	{
		putchar(albet1);
	}
	for (albet2 = 'A'; albet2 <= 'Z'; albet2++)
	{
		putchar(albet2);
	}
	putchar('\n');
	return (0);
}
