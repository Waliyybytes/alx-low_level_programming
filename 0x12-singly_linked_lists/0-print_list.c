#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * list_len - function
 * @h: a list_t type
 *
 * Return: Number of elelments
 */

size_t list_len(const list_t *h)
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

