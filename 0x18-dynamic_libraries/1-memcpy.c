#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest:The  memory where is stored
 *@src: the memory where is copied
 *@n: The number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;/* Store the original destination pointer*/

	while (n > 0)
	{
	*dest++ = *src++; /*Copy bytes from src to dest*/
	n--;
	}
	return (original_dest); /*Return the original destination pointer*/
}
