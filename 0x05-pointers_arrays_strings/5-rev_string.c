#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: character
 * Return: void
 */
void rev_string(char *s)
{
	int length, i;

	length = strlen(s);
	for (i = 0; i < length / 2; i++)
	{
		char temp_var = s[i];

		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp_var;
	}
}
