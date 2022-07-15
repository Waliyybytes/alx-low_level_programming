#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node- function
 * @head: a list_t type
 * @str: string to add
 * Return: Number of elelments
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (*head == NULL)
		return (NULL);
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	tmp->len = strlen(tmp->str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}

