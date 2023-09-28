#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _memset- fill block of memory with a constant byte
 * @s: start address of memory to be filled
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
