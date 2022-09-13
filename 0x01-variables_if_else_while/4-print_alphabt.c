#include <stdio.h>

/**
 * main - this function contains the program code
 * Description: a program that prints the alphabet in lowercase
 * followed by a new line
 *
 * Return: it will return 0
 *
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
