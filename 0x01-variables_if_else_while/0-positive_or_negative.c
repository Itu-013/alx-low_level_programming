#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the function that contains the program
 *
 * Descrition: this program will assign a random number to the variable
 * Return: it will return 0
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
