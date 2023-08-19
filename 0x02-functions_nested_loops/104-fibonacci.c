#include <stdio.h>
/**
 * main - fibonacci
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	unsigned long fibo1 = 0, fibo2 = 1, sum = 0;

	for (n = 0; n < 98; n++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);
		fibo1 = fibo2;
		fibo2 = sum;
		/*if the count is 98, the , should not be printed*/

		if (n == 97)
		{
		printf("\n");
		}
		else
		{
		printf(", ");
		}
	}
	return (0);
}
