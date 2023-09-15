#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers- function that prints numbers
 * @separator: pointer to string to be separated
 * @n: number of integers passed to the funtion
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(args, n);

	while (i < n)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	}
	printf("\n");
}
