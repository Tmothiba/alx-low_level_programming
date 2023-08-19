#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - printing number from n to 98
 *
 *@n: initial number to be printed
 *Return: 0 (Sussecc)
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		if (n == 98)
		{
			printf("%d", n);
			break;
		}
		printf("%d", n);
		printf(",");
		printf(" ");
		n--;
	}
	while (n < 98)
	{
		if (n == 98)
		{
			printf("%d", n);
			break;
		}
		printf("%d", n);
		printf(",");
		printf(" ");
		n++;
	}
	if (n == 98)
	{
		printf("%d", n);
	}

	printf("\n");
}
