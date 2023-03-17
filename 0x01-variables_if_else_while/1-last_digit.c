#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - main function
*
* Return: Always 0
*/
int main(void)
{
	int n;
int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
j = n % 10;
if (j > 5)
	printf("last digit of %d is %d and is greater than 5", n, j);
else if (j == 0)
	printf("last digit of %d is %d and is zero", n, j);
else if (j < 6 && j != 0)
	printf("last digit of %d is %d  and is less than 6 and not 0 ", n, j);
printf("\n");
return (0);
}
