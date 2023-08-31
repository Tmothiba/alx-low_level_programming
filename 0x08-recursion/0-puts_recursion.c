#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion- prints string followed by new line.
 * @s: string to be printed.
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		puts(" ");
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
