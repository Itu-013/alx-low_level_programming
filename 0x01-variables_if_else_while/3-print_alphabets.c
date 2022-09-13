#include <stdio.h>

/**
 * main - this function contains the program code
 * Description: a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 *
 * Return: it will return 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
