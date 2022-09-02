#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - to print list
 * @h: head
 * Return: number of elements
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
