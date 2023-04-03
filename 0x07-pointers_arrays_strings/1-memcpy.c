#include "main.h"
/**
 *_memcpy - this is a function that copies memory area
 *@dest: memory where is stored(destination)
 *@src: memory where is copied(source)
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
