#include <stdio.h>
#include "main.h"

/**
* main - this prints all arguments it receives
* @argc: this prints number of arguments
* @argv: this is array of numbers
* Return: always 0
*/

int main(int argc, char *argv[])
{
	int f;

	for (f = 0; f < argc; f++)
	{
		printf("%s\n", argv[f]);
	}
	return (0);
}
