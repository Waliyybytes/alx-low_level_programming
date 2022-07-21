#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * delete_nodeint_at_index- function
 * @head: a list_t type
 * @index: where to index
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0, count = 0;
	listint_t *tmp;
	listint_t *tmp2;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	tmp2 = *head;
	while (tmp2 != NULL)
	{
		tmp2 = tmp2->next;
		count++;
	}
	if (index == 0)
		*head = (*head)->next;
	if (index > 0 && index < count)
	{
		for (i = 0; i < index; i++)
		{
			if (tmp->next != NULL)
				tmp = tmp->next;
		}
		tmp->next = tmp->next->next;
	}
	if (index == count)
	{
		while (tmp->next->next != NULL)
			tmp = tmp->next;
		tmp->next = NULL;
	}
	if (index > count)
		return (-1);
	return (1);
}

