#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * sum_listint- function
 * @head: a list_t type
 *
 * Return: Nothing
 */

int sum_listint(listint_t *head)
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

