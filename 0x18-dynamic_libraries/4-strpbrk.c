#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Entry point
 * @s: an input
 * @accept: an input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
