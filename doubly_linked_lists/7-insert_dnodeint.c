#include "lists.h"

/**
 * insert_dnodeint_at_index - print
 * @h: head of list
 * @idx: index
 * @n: data
 * Return: number of nodes
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp, *ptr, *pot;
	unsigned int a = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		new->n = n;
		*h = new;
		return (*h);
	}
	ptr = *h;
	while (ptr->next != NULL)
	{
		a++;
		ptr = ptr->next;
	}
	if (idx > a)
	{
		free(new);
		return (*h);
	}
	tmp = *h;
	while (idx != 0)
	{
		tmp = tmp->next;
		idx--;
	}
	pot = tmp->prev;
	new->prev = tmp->prev;
	new->next = tmp;
	tmp->prev = new;
	if (pot != NULL)
		pot->next = new;
	else
		*h = new;
	new->n = n;
	return (new);
}
