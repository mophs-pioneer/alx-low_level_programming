#include "main.h"
#include <stddef.h>

/**
 * _strchr - This theEntry point
 * @s: The  input
 * @c: the  input
 * Return: Always null (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0';)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
