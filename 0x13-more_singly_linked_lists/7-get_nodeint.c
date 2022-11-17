#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * get_nodeint_at_index- function
 * @head: a list_t type
 * @index: node to get
 * Return: Nothing
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{push
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i != index)
	{
		head = head->next;
		i++;
		if (head == NULL)
			break;
	}

	if (index > i)
		return (NULL);
	return (head);
}

