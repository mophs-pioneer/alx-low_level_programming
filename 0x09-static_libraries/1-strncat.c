#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int v;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	v = 0;
	while (v < n && src[v] != '\0')
	{
	dest[k] = src[v];
	k++;
	v++;
	}
	dest[k] = '\0';
	return (dest);
}
