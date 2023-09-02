#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half- prints half of a string.
 * @str: string to be printed.
 * Return: void
 */
void puts_half(char *str)
{
	int len, n;

	len  = strlen(str);
	n = len / 2;

	if (len % 2 != 0)
	{
		len++;
	}

		puts(str + n);
}
