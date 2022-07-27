#include "lists.h"
/**
 * free_listint - Entry Point
 * @head: head
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	if (head != NULL)
	free(head);
}
