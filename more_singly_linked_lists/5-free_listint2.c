#include "lists.h"
/**
 * free_listint2 - Entry Point
 * @head: head
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while ((*head) != NULL)
	{
		ptr = *head;
		(*head) = (*head)->next;
		free(ptr);
	}
	if (head != NULL)
		head = NULL;
}
