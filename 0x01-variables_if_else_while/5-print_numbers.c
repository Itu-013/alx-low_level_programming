#include <stdio.h>

/**
 * main - this function contains the program code
 *
 * Description: a program that prints all single digit numbers of base 10
 *
 * Return: it will returns 0
 *
 */

int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
