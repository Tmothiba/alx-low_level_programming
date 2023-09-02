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
	int len = 0, n;

	len  = strlen(str);
	n = len / 2;

	if (n % 2 != 0)
	{
		 n = (len + 1) / 2;
		_putchar(n);
	}
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	  
	_putchar('\n');
} 

