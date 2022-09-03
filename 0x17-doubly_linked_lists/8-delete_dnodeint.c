#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index- function
 * @head: a list_t type
 * @index: where to index
 * Return: int
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0, count = 0;
	dlistint_t *tmp, *tmp2, *dummy;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head, tmp2 = *head;
	while (1)
	{
		tmp2 = tmp2->next, count++;
		if (tmp2 == NULL)
			break;
	}
	free(tmp2);
	if (index == 0)
	{
		if ((*head)->next != NULL)
			(*head)->next->prev = NULL, *head = (*head)->next, free(tmp);
		else
		{	*head = NULL, free(tmp);
			return (-1); } }
	if (index > 0 && index < count)
	{
		for (i = 0; i < index; i++)
		{
			if (tmp->next != NULL)
				tmp = tmp->next;
		}
		dummy = tmp->next, free(tmp->next), dummy->next->prev = tmp;
		tmp->next = dummy->next; }
	if (index == count)
	{
		while (tmp->next->next != NULL)
			tmp = tmp->next;
		tmp->next = NULL, tmp->next->prev = NULL; }
	if (index > count)
	{
		return (-1); }
	return (1);
}
