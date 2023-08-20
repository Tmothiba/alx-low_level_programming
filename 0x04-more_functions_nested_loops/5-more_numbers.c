#include "main.h"
/**
 * more_numbers - printing numbers 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int a = 0, b, c = 0;

	while (a <= 9)
	{
		for (b = 0; b <= 14; b++)
		{
			c = b;
			if (b > 9)
			{
				_putchar('0' + 1);
				c = b % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
		a++;
	}
}
