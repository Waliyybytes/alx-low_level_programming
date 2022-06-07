#include <stdio.h>
#include "main.h"
/**
 * main- this is a function that prins some charcterss with a loop
 *
 * Return: 0 is success
 *
 */
int main(void)
{

	char streak[] = "_putchar";
	int i;

	for (i = 0; streak[i]; i++)
		_putchar(streak[i]);
	_putchar('\n');
	return 0;
