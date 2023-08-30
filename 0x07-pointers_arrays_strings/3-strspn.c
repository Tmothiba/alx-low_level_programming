#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *_strspn- function that gets the length of a prefix substring
 * @s:  string to scan
 * @accept: string containing the charatcters to match
 * Return: number of characters contained only in accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
