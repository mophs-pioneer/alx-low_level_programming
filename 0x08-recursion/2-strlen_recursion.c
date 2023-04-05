#include "main.h"
/**
*  _strlen_recursion - the function that t returns length of string
* @s: the string that is measured
* Return: the legth of the string
*/

int _strlen_recursion(char *s)
{
	int mophs = 0;

	if (*s)
	{
		mophs++;
		mophs += _strlen_recursion(s + 1);
	}
	return (mophs);
}
