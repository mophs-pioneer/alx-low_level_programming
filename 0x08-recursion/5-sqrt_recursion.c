#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
*  _sqrt_recursion - returns natural square root of a number
* @n: number to calculate sqrt
* Return: the result of sqrt
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of iterator
 * @j: this is the iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j + 1));
}