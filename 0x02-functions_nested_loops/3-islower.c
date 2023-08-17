#include "main.h"

/**
 * _islower - check the code.
 *@c: the character to be checked
 * Return: 1 for lowercase characters or 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
