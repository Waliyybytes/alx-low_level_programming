#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
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
		i++;
		h = h->next;
	}

	return (i);
}

