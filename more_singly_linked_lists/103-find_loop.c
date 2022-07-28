#include "lists.h"

/**
 * find_listint_loop - entry
 * @head: head
 * Return: mm
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = head->next;
	while (head != NULL || ptr != NULL)
	{
		if (head->next < ptr->next)
		{
			ptr = ptr->next;
			return (ptr);
		}
		head = head->next;
		ptr = ptr->next;
	}
	return (NULL);
}
