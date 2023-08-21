#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - print a string in reverse
 *
 * @s: character
 * Return: void
 */
void print_rev(char *s)
{
	int length = strlen(s), i;

	for (i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
