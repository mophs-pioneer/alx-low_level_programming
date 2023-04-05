#include "main.h"
int actual_prime(int n, int i);
/**
* is_prime_number - tells whether an integer ia prime number or not
* @n: is the number to be evaluated
* Return: 1 if prime , 0 if not prime
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (1);
	return (actual_prime(n, n-1));
	}

/**
 * actual_prime - the function that calculates if a number is prime recursively
 * @n: the number to evaluate
 * @i: my iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
