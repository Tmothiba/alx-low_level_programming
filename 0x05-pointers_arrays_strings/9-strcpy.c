#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy- copies a string
 * @dest: pointer to  destination were string will be copied.
 * @src: pointer to string to be copied.
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
