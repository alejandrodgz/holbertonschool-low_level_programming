#include "lists.h"

/**
* get_dnodeint_at_index - print
* @head: head of list
* @index: data
* Return: number of nodes
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp, *pt;
	unsigned int a = 1;

	if (head == NULL)
	{
		return (NULL);
	}
	pt = head;
	while (pt != NULL)
	{
		pt = pt->next;
		a++;
	}
	if (index > a)
		return (NULL);
	tmp = head;
	while (index != 0)
	{
		tmp = tmp->next;
		index--;
	}
	return (tmp);
}
