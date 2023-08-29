#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memcpy- copies memory area
 * @dest: destination where copied data will be stored
 * @src: source or memory location where data will be copied
 * @n: number of bytes to be copied
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
