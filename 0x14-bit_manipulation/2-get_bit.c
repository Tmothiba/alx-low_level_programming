#include "main.h"
/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: number to search
 * @index: bit index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (index > 63)
	{
		return(-1);
	}
	bitValue = (n >> index) & 1;
	return (bitValue);
}
