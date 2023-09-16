#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * printChar - function that prints a character
 * @args: pointer to an argument
 * Return: void
 */
void printChar(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * printInt - function that prints an integer
 * @args: pointer to an argumemt
 * Return: nothing
 */
void printInt(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * printFloat- function that print a float
 * @args: pointer to an argument
 * Return: nothing
 */
void printFloat(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * printString- function that prints string
 * @args: pointer to arguments
 * Return: nothing
 */
void printString(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
	{
	printf("(nil)");
	return;
	}
	printf("%s", str);
}

/**
 * print_all - function that print all strings
 * @format: pointer to a fixed char
 * Return: void
 */
void print_all(const char * const format, ...)
{
		print_type types[] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFloat},
		{"s", printString},
		{NULL, NULL}
	};
	va_list args;
	char *separator = "";
	int i = 0, j = 0;

	va_start(args, format);
	while (format && format[i])
	{
		while (types[j].type)
		{
			if (*types[j].type == format[i])
			{
				printf("%s", separator);
				types[j].f(args);
				separator = ", ";
			}
			++j;
		}
		j = 0;
		++i;
	}
	printf("\n");
	va_end(args);
}
