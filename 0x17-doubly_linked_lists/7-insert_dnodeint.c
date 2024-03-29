#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index- function
 * @h: a list_t type
 * @idx: where to index
 * @n: member
 * Return: listint_t
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newNode, *tmp;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		tmp = *h;
		for (i = 0; i < idx - 1; i++)
		{
			if (tmp != NULL)
				tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
	}
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *h, newNode->prev = NULL, *h = newNode;
	}
	else
	{
		newNode->prev = tmp;
		newNode->next = tmp->next;
		tmp->next = newNode;
		if (newNode->next != NULL)
			(tmp->next)->prev = newNode;
	}
	return (newNode);
}

