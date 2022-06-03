#include <stdio.h>
/*
 *
 * main:  Printing to standard error
 *
 *
 * return: an error occurs (1)
 *
 */

int main(void)

{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			 59, 1, stderr);
	return (1);
}

