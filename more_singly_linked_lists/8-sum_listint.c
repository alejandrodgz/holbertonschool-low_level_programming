#include "lists.h"
/**
 * get_nodeint_at_index - eturns the number of elements in a
 * linked listint_t list
 * @head: head of the list
 * @index: value
 * Return: the number nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int i = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		i += ptr->n;
		ptr = ptr->next;
	}
	return (i);
}
