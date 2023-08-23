#include "main.h"
/**
 * _memset - Function to fill a block of memory with a specific value
 * @s: The starting address of memory to be filled
 * @c: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char c, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = c;
		n--;
	}
	return (s);
}
