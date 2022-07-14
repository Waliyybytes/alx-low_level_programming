#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * print_list - function
 * @h: a list_t type
 *
 * Return: Number of elelments
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (1)
	{
		if (h == NULL)
			break;
		printf("[%d] %s\n", (h->str == NULL) ? 0 : h->len,
				(h->str == NULL) ? "(nil)" : h->str)
		i++;
		h = h->next;
	}

	return (i);
}

