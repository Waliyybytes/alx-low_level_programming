#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - get  node at index
 * @head: head
 * Return: a node
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

