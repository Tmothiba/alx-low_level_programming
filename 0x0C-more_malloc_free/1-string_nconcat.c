#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat- concates 2 strings
 * @s1: destination string
 * @s2: string to append to dest
 * @n: maximun number of character.
 * Return:pointer to memory allo.
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int lenS1, lenS2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	lenS1 = strlen(s1);
	lenS2 = strlen(s2);

	if (n >= lenS2)
	{
		n = lenS2;
	}

	ptr = (char *)malloc(lenS1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);
}
