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
{
	unsigned int i = 0;

	if (head == NULL)
	{
		head->n = 0;
		return (NULL);
	}
	while (i != index)
	{
		head = head->next;
		i++;
		if (head == NULL)
			break;
	}

	if (i != index)
		return (NULL);
	return (head);
}

