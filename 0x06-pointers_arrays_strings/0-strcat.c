#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strcat - concatinating 2 strings
 * @dest: string 1
 * @src: string 2
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
	dest[i + j] = src[j];
	}
	return (dest);
}
