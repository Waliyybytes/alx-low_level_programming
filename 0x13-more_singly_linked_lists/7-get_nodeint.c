#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * get_nodeint_at_index- function
 * @head: a list_t type
 * Return: Nothing
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i != index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}

