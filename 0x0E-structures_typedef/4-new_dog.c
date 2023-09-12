#include <stdlib.h>
#include "dog.h"

/**
 * newstr - returns pointer to a space in memory
 * @str: string to copy
 * Return: pointer or Null on failure
 *
 */
char *newstr(char *str)
{
	char *arr;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	arr = malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
		arr[j] = str[j];
		j++;
	}
	arr[j] = 0;
	return (arr);
}

/**
 * new_dog - creates new dog;
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: Null on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *nameCopy;
	char *ownerCopy;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}

	nameCopy = newstr(name);
	if (!nameCopy && name)
	{
		free(new);
		return(NULL);
	}
	ownerCopy = newstr(owner);
	if(!ownerCopy && owner)
	{
		free(nameCopy);
		free(new);
		return (NULL);
	}
	(*new).name = nameCopy;
	(*new).age = age;
	(*new).owner = ownerCopy;

	return (new);
}

