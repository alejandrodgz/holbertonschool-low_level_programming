#include "lists.h"

/**
* sum_dlistint - print
* @head: head of list
* Return: sum of data
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int a = 0;

	if (head == NULL)
	{
		return (0);
	}
	tmp = head;
	while (tmp != NULL)
	{
		a += tmp->n;
		tmp = tmp->next;
	}
	return (a);
}
