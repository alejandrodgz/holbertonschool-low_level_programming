#include "lists.h"

/**
* add_dnodeint - print
* @head: head of list
* @n: data
* Return: number of nodes
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
		{
			free(*head);
			free(new);
			return (NULL);
		}
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
	return (*head);
}
