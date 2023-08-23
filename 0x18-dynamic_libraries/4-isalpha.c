#include "main.h"
/**
 * _isalpha - function Checks for lowercase and uppercase
 * @c: The Character that is being checked
 * Return: If c is lowercase and or uppercase, return 1, if not return 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
