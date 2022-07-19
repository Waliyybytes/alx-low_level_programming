#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * listint_len - function
 * @h: a list_t type
 *
 * Return: Number of elelments
 */

size_t listint_len(const listint_t *h)
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

