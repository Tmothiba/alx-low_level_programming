#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup- returns pointer to a space in memory.
 * @str: pointer to a char/string.
 *
 * Return: NULL if str is null
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	arr = (char *)malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		arr[j] = str[j];
	}
	return (arr);
}
