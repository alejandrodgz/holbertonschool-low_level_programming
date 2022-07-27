#include "lists.h"

/**
 * free_listint - frees
 * @head: head
 *
 *
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while ((ptr=head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
