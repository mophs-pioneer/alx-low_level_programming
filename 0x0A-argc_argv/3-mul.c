#include <stdio.h>
#include "main.h"

/**
 * _atoi - c function that converts a string to an integer
 * @s: string to be converted to integer
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int b, q, v, len, r, digit;

	b = 0;
	q = 0;
	v = 0;
	len = 0;
	r = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (b < len && r == 0)
	{
		if (s[b] == '-')
			++q;

		if (s[b] >= '0' && s[b] <= '9')
		{
			digit = s[b] - '0';
			if (q % 2)
				digit = -digit;
			v = v * 10 + digit;
			r = 1;
			if (s[b + 1] < '0' || s[b + 1] > '9')
				break;
			r = 0;
		}
		b++;
	}

	if (r == 0)
		return (0);

	return (v);
}

/**
 * main - this multiplies two numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
