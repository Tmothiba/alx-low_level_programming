#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strchr- locates a character in a string
 * @s: string to be scanned
 * @c: character to be searched for in s
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s != c)
	{
		s++;
	}
	else
	{
	return (s);
	}
	}
	if (c == '\0')
	{
	return (s);
	}
	return (NULL);
}
