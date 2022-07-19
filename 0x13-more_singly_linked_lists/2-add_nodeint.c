#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_nodeint- function
 * @head: a list_t type
 * @n: int
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}

