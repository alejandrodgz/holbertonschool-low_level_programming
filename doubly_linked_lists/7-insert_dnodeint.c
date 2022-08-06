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
		return (NULL);
	if (*h == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	ptr = *h;
	while (ptr != NULL)
	{
		a++;
		ptr = ptr->next;
	}
	if (idx > a)
	{
		free(new);
		return (NULL);
	}
	tmp = *h;
	while (idx != 0 && (tmp->next))
	{
		tmp = tmp->next;
		idx--;
	}
	if (idx == 1)
		return (add_dnodeint_end(h, n));
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
