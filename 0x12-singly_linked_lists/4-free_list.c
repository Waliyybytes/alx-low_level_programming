#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * free_list- function
 * @head: a list_t type
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *currentNode;
	if (head == NULL)
	{
		free(head);
		return;
	}
	while (head->next != NULL)
	{
		currentNode = head;
		head = head->next;
		free(currentNode->str);
		free(currentNode);
	}
	free(head->str);
	free(head);
}

