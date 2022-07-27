#include "lists.h"

/**
 * add_nodeint_end - eturns the number of elements in a linked listint_t list
 * @head: head of the list
 * @n: value
 * Return: the number nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = ptr;
	return (ptr);
}
