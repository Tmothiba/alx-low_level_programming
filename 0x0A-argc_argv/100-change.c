#include <stdio.h>
#include <stdlib.h>

/**
 * main- main program
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, cents, num_coins, min_coins;
	int coin_vals[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num_coins = sizeof(coin_vals) / sizeof(coin_vals[0]);

	min_coins = 0;
	i = 0;

	while (cents > 0 && i < num_coins)
	{
		if (cents >= coin_vals[i])
		{
			int numCoins = cents / coin_vals[i];

			min_coins += numCoins;
			cents -= numCoins * coin_vals[i];
		}
			i++;
	}
	printf("%d\n", min_coins);
	return (0);
}

