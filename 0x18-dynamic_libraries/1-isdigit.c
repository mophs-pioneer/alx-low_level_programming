#include "main.h"

/**
 * _isdigit - the function checks for a digit 0 through 9
 * @c: The inputvalue
 * Return: if digit returns 0 otherwise 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
