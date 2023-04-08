#include <stdio.h>
#include "main.h"

/**
* main - this prints the number of arguments passed to the program
* @argc: the number of arguments
* @argv: the array of arguments
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	(void)argv;/*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
