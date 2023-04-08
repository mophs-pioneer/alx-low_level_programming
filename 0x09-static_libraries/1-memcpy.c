#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: destinatiopn memory where is stored
 *@src: memory where is copied
 *@n: the number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int q = 0;
	int i = n;

	for (; q < i; q++)
	{
		dest[q] = src[q];
		n--;
	}
	return (dest);
}
