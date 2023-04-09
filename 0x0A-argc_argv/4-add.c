#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - function/prototype to check - string there are digit
 * @str: array str declared
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*counts the  string*/

	{
		if (!isdigit(str[count])) /*this checks if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - function to Print the name of the program
 * @argc: the Count of arguments
 * @argv: Arguments of array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declaration of variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*this goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*prints  the  sum and a new line*/

	return (0);
}
