#include "main.h"
/**
* _strcpy - copies string
* @dest: destinaion array
* @src: source array
* Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i] != '\n' ; i++)
		dest[i] = src[i];
	return (dest);
}
