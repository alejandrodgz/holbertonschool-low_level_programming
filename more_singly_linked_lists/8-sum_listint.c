#include "lists.h"
/**
 * sum_listint - returns the sum of elements
 *
 * @head: head of the list
 * Return: the sum of the values
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
