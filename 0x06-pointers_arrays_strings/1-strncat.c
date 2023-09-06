#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncat- concatinating 2 strings
 * @dest: string 1
 * @n: input value
 * @src: string 2
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while ((j < n) && (src[j] != '\0'))
		{
		dest[i] = src[j];
		i++;
		j++;
		}

	dest[i] = '\0';
	return (dest);
}
