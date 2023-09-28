#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to string containing binary number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int num;
	unsigned int dec = 0;

	if (!b)
	{
		return (0);
	}
	for (num = 0; b[num]; num++)
	{
		if (b[num] < '0' || b[num] > '1')
			return (0);
		dec = 2 * dec + (b[num] - '0');
	}
	return (dec);
}
