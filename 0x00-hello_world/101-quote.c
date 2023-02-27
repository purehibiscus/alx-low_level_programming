#include <stdio.h>
#include <unistd.h>

/**
 * main - code entry point
 * description - prints defined words to the standard error
 * Return: program returns 1(error)
 */

int main(void)
{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, err, 59);
	return (1);
}
