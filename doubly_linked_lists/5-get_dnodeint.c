#include "lists.h"

/**
* get_dnodeint_at_index - print
* @head: head of list
* @n: data
* Return: number of nodes
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;

	if (head == NULL)
	{
		return (NULL);
	}
	tmp = head;
	while (index != 0)
	{
		tmp = tmp->next;
		index--;
	}
	return (tmp);
}
