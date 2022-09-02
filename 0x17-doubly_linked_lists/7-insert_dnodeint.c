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
	unsigned int i = 0, count;
	dlistint_t *newNode, *tmp = *h, *tmp2 = *h;

	newNode = malloc(sizeof(dlistint_t));
	newNode->n = n;
	if (newNode == NULL)
		return (NULL);
	if (h == NULL || *h == NULL)
		return (NULL);
	while (tmp2 != NULL)
		tmp2 = tmp2->next, count++;
	if (idx == 0)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		*h = newNode;
	}
	if (idx > 0 && idx < count)
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (tmp != NULL)
				tmp = tmp->next;
		}
		newNode->prev = tmp;
		newNode->next = tmp->next;
		tmp->next = newNode;
		(tmp->next)->prev = newNode;
	}
	if (idx == count)
	{
		newNode->next = NULL;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newNode;
		newNode->prev = tmp;
	}
	if (idx > count)
		return (NULL);
	return (newNode);
}

