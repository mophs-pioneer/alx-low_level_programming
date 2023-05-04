
#include "main.h"

/**
 * print_binary - this is the function that prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int f, count = 0;
	unsigned long int current;

	for (f = 63; f >= 0; f--)
	{
		current = n >> f;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
