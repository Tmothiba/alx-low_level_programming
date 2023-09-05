#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat- concats 2 string.
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *add;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	add = (char *)malloc((i + j + 1) * sizeof(char));
	if (add == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		add[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		add[i] = s2[j];
		i++;
		j++;
	}
	add[i] = '\0';
	return (add);
}
