#include "lists.h"

/**
 *
 *
 *
 *
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	ptr = head;
	while (ptr->next != NULL)
	{
		head = ptr;
		free(head);
		ptr = ptr->next;
	}
}
