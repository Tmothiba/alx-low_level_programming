#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * multiply- multiplies 2 numbers.
 * @num1: first digit to be miltiplied
 * @num2: second digit to multiply
 * Return: int
 */
unsigned int multiply(unsigned int num1, unsigned int num2)
{
	unsigned int mul;

	mul = num1 * num2;
	return (mul);
}

/**
 * digit- checks if a number is a digit.
 * @str: character to be checked.
 * Return:int
 */
int digit(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * main- main program
 * @argc : argument count
 * @argv: argument vector
 * Return: Always o (success)
 */
int main(int argc, char *argv[])
{
	char *num1_str, *num2_str;
	unsigned int product, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1_str = argv[1];
	num2_str = argv[2];

	if (!digit(num1_str) || !digit(num2_str))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(num1_str);
	num2 = atoi(num2_str);

	product = multiply(num1, num2);
	printf("%u\n", product);
	return (0);
}
