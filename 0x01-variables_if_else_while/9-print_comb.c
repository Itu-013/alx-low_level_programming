#include <stdio.h>

/**
 * main - the function containing the program command
 * Description: a program that prints all possible
 * combinations of single-digit numbers
 * Return: it will return 0
 *
 */

int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
