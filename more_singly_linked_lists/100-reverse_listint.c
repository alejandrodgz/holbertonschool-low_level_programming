#include "lists.h"

/**
 * reverse_listint - reverse the list
 *
 * @head: head
 * Return: head of the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *pot, *p;

	if (*head == NULL)
		return (NULL);
	p = *head;
	pot = *head;
	ptr = (*head)->next;
	pot->next = NULL;
	while (ptr->next != p)
	{
		if (ptr->next == NULL)
		{
			*head = ptr;
			ptr->next = pot;
			return(*head);
		}
		*head = ptr;
		ptr = ptr->next;
		(*head)->next = pot;
		pot = (*head);
	}
	return (ptr);
}
