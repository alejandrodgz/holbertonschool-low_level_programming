#include "lists.h"
/**
 * pop_listint - eturns the number of elements in a linked listint_t list
 * @head: head of the list
 * Return: the value of eliminated node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int a;

	ptr = *head;
	if (ptr == NULL)
		return (0);
	a = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (a);
}
