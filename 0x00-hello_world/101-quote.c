#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - the function that houses the command
 * this program is to print a statement
 *
 * Return: will be 1
 */

int main(void)
{
	int s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19 ");

	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", s);

	return (1);
}
