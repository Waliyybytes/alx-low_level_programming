#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * pop_listint- function
 * @head: a list_t type
 * Return: Nothing
 */

int pop_listint(listint_t **head)
{
	listint_t *currentNode;
	int i;

	if (*head == NULL)
	{
		free(*head);
		return (0);
	}
	i = (*head)->n;
	currentNode = *head;
	*head = (*head)->next;
	free(currentNode);
	return (i);
}

