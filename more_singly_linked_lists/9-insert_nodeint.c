#include "lists.h"
/**
 * get_nodeint_at_index - eturns the number of elements in a
 * linked listint_t list
 * @head: head of the list
 * @index: value
 * Return: the number nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *pot;
	unsigned int i = 1, j = 0;
**
	if (head == NULL)
		return (NULL);
	ptr = head;
	if (ptr == NULL)
		return (NULL);
	pot = malloc(sizeof(listint_t));
	while (head != NULL)
	{
		j++;
		head = head->next;
	}
	if (index > j)
	{
		return (NULL);
	}
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	ptr->next = pot;
	pot->n = n;
	return (ptr);
}
