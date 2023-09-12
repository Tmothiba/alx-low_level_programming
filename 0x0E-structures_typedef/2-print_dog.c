#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a dog struct
 * @d: the struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return;
	}
	
	if((*d).name)
	{
		printf("Name: %s\n", (*d).name);
	}
	else if((*d).name == NULL)
	{
		printf("Name: (nil)\n");
	
	}
	printf("Age: %.6f\n", (*d).age);
	if ((*d).owner)
	{
		printf("Owner: %s\n", (*d).owner);
	}
	else if ((*d).owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

	
}
