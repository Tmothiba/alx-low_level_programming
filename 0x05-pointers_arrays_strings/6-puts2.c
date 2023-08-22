#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - print every other characgter of a string
 * @str: pointer variable to char data type
 *
 * Return: void
 */
void puts2(char *str)
{
	int length = strlen(str), i;

	for (i = 0; i < length; i += 2)
	{
	printf("%c", str[i]);
	}
	printf("\n");
}
