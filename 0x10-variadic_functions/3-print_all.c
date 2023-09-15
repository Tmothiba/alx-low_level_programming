#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *
 * print_all - print all strings
 *
 * @format: pointer to a fixed char
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (i > 0)
		{
			printf(", ");
		}


		switch (format[i])
		{
			case 'c':
				{
				char c = va_arg(args, int);

				printf("%c", c);
				break;
				}
			case 'i':
				{
				int num = va_arg(args, int);

				printf("%d", num);
				break;
				}
			case 'f':
				{
				double num = va_arg(args, double);

				printf("%f", num);
				break;
				}
			case 's':
				{
				char *str = va_arg(args, char *);

				if (str != NULL)
				{
				printf("%s", str);
				}
				else
				{
					printf("(nil)");
				}
				break;
				}
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
