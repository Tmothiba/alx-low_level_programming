#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - printing last didit of a number
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_digit = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if ( n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else 
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}