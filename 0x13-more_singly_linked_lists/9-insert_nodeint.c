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
	unsigned int i = 0, count;
	listint_t *newNode, *tmp = *head, *tmp2 = *head;

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	if (newNode == NULL)
		return (NULL);
	if (head == NULL || *head == NULL)
		return (newNode);
	while (tmp2 != NULL)
	{
		tmp2 = tmp2->next;
		count++;
	}
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	if (idx > 0 && idx < count)
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (tmp != NULL)
				tmp = tmp->next;
		}
		newNode->next = tmp->next;
		tmp->next = newNode;
	}
	if (idx == count)
	{
		newNode->next = NULL;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newNode;
	}
	if (idx > count)
		return (NULL);
	return (newNode);
}

