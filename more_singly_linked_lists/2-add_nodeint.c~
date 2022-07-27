#include "lists.h"

/**
 * add_nodeint - eturns the number of elements in a linked listint_t list
 * @head: head of the list
 * @n: value
 * Return: the number nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (*head == NULL)
		return(NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr = *head;
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
