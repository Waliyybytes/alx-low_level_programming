#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end- function
 * @head: a list_t type
 * @str: string to add
 * Return: address yp new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *lastNode = NULL;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = (str == NULL) ? NULL : strdup(str);
	if (str == NULL)
		free(strdup(str));
	newNode->len = (str == NULL) ? 0 : strlen(newNode->str);
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (newNode);
}

