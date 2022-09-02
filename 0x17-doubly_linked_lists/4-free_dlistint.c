#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - to add node
 * @head: head
 * Return: a linkedlist
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
	free(head);

}
