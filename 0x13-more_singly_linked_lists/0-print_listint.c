#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * print_listint - function
 * @h: a list_t type
 *
 * Return: Number of elelments
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (1)
	{
		if (h == NULL)
			break;
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}

