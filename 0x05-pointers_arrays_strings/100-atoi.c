#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _atoi- converts a string to integer
 *
 * @s: string to be converted.
 * Return: 0;
 */
int _atoi(char *s)
{
	int num = 0, i;
	int len = strlen(s);

	for (i = 0; i < len; i++)
	{
	if (s[0] == '-')
	{
		num = atoi(s + 1);
		num = -num;
	}
	else
	{
		num = atoi(s);
	}
	}
	return (0);
	
}
