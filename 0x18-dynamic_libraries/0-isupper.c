#include "main.h"

/**
 * _isupper - The function checks for uppercase character
 * @c: The character that is checked
 * Return: if uppercase returns 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
