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
	int len = 0, n, i;
	int half_len = strlen(str) / 2;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (i = half_len; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2 != 0)
	{
		for (n = (len - 1) / 2; n < (len - 1); n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');

}
