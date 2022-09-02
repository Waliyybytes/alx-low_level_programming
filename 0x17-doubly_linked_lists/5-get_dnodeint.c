#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get  node at index
 * @head: head
 * @index: index to  search
 * Return: a node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

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

