#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer to char array representing a name.
 *
 * @f: pointer to function.
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
	{
		return;
	}
	f(name);
}