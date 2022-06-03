#include <stdio.h>
/*
 * main - Entry point
 *
 * Printing to standard error
 *
 *
 * return 1 - an error occurs
 *
 */

int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19", 60, 1, stderr);
	return (1);
}

