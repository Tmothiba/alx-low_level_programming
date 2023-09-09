#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main- main program
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num, sum = 0, i, j;
	char *num_str;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num_str = argv[i];
		for (j = 0; num_str[j] != '\0'; j++)
		{
			if (!isdigit(num_str[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	num = atoi(num_str);
	sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
