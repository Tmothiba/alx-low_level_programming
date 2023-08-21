#include "main.h"
#include <string.h>
/**
 * _strlen - return the length of a string
 *
 * @s: string
 * Return: 0 (Success)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
