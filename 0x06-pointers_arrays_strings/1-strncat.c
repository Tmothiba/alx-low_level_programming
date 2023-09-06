#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strcat - concatinating 2 strings
 * @dest: string 1
 * @src: string 2
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
        char temp[100];

	strncpy(temp, dest, n);
	dest[n] = '\0';

	strncat(temp, src, n - strlen(temp));
	printf("%s", dest);
        return (dest);
}
