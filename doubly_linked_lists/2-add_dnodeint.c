#include "lists.h"

/**
* dlistint_len - print
* @h: head of list
* Return: number of nodes
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (*head == NULL || head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		(*head)->next = NULL;
		(*head)->prev = NULL;
		(*head)->n = n;
		return (*head);
	}
	else
	{
		new->next = (*head);
		(*head)->prev = new;
		new->prev = NULL;
		new->n = n;
		*head = new;
	}
	return(*head);
}
