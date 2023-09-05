#include "main.h"
#include <stdlib.h>
/**
 * _strdup- returns pointer to a space in memory.
 * @str: pointer to a char/string.
 *
 * Return: NULL if str is null
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *arr = (char *)malloc((i + 1) * sizeof(char));


	if (str == NULL || arr == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; str[j]; j++)
	{
		arr[j] = str[j];
	}
	return (arr);
}
