#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * free_listint2- function
 * @head: a list_t type
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *currentNode;

	if (*head == NULL)
	{
		free(*head);
		return;
	}
	while ((*head)->next != NULL)
	{
		currentNode = *head;
		*head = (*head)->next;
		free(currentNode);
	}
	free(*head);
	*head = NULL;
	head = NULL;
}

