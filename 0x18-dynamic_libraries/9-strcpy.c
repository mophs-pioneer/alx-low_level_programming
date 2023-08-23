#include "main.h"

/**
 * *_strcpy - copy the string pointed by src, to the buffer pointed to by dest
 * @dest: The char pointer
 * @src: The char pointer 2
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int len, count;

	len = 0;

	while (src[len] != '\0')
		len++;
	for (count = 0; count <= len; count++)
		dest[count] = src[count];
	return (dest);
}
