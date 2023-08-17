#include "main.h"
#include <stdio.h>

/**
 * _abs - check the code
 * @c: the number to be computed.
 * Return: Always 0.
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;
		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}
