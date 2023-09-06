#include "main.h"
#include <stdlib.h>
/**
 * *argstostr- function that concats  all arguments.
 * @ac: input int
 * @av: pointer array.
 *
 * Return: pointer to string or Null if fails.
 */
char *argstostr(int ac, char **av)
{
	int i, n, j, r;
	char *str;

	j = 0;
	r = 0;
if (ac == 0 || av == NULL)
{
	return (NULL);
}
for (i = 0; i < ac; i++)
{
	for (n = 0; av[i][n]; n++)
	{
		r++;
	}
}
r += ac;
str  = (char *)malloc(sizeof(char) * (r + 1));
if (str == NULL)
{
	return (NULL);
}
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
	str[j] = av[i][n];
	j++;
}
if (str[j] == '\0')
{
	str[j++] = '\n';
}
}
return (str);
}
