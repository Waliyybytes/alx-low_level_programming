#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main- generate a 14 key password
 *
 * Return: 0 is success
 */

int main(void)
{
	int password_length = 14;
	int i;

	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/|";

	srand(time(NULL));
	for (i = 0; i < password_length; i++)
	{
		printf("%c", list[rand() % (sizeof(list) - 1)]);
	}
	printf("\n");
	return (0);

}
