#include <stdio.h>

/**
 * main -  this function contains the program code
 *
 * Description: a program that prints the lowercase alphabet in reverse,
 * followed by a new line
 *
 * Return: it will return 0
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
