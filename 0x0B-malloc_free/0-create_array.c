#include "main.h"
#include <stdlib.h>
/**
 * create_array -  function that creates sarray of size size and assign char c
 * @size: this is the size of array
 * @c: the  char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int e;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (e = 0; e < size; e++)
		str[e] = c;
	return (str);
}
