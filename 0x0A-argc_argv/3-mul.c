#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main- main program
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, results;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	results = num1 * num2;

	printf("%d\n", results);
	return (0);
}
