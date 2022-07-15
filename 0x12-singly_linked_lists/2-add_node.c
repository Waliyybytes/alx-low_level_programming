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

	tmp = malloc(sizeof(*head));
	if (tmp == NULL)
		return (NULL);
	if (str == NULL)
	{
		tmp->str = NULL;
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	tmp->str = strdup(str);
	tmp->len = strlen(tmp->str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}

