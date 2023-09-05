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
	while (str[j])
	{
		j++;
	}
	arr = (char *)malloc((i + 1) * sizeof(char));
	if (arr == NULL)
	{
	return (NULL);
	}
	while ((arr[i] = str[i]) != '\0')
	{
			i++;
	}
	return (arr);
}
