#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - to add node
 * @head: head
 * @n: data to add
 * Return: a linkedlist
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *dummy;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head != NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	dummy = *head;
	while (dummy->next != NULL)
		dummy = dummy->next
	new->prev = dummy;
	dummy->next = new;
	return (new)

}
