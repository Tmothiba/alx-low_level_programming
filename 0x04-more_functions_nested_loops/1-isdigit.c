#include "main.h"
/**
 * _isdigit - checks for a digit
 *
 * @c: digit to be checked
 * Return: 0 if otherwise and 1 if c is a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
