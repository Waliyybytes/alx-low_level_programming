#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * insert_nodeint_at_index- function
 * @head: a list_t type
 * @idx: where to index
 * @n: member
 * Return: listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode;
	listint_t *tmp = *head;

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	for (i = 0; i < idx - 1; i++)
	{
		if (tmp != NULL)
			tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	if (i == idx - 1)
	{
		newNode->next = tmp->next;
		tmp->next = newNode;
	}
	return (newNode);
}

