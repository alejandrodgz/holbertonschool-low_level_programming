#include "lists.h"

/**
 * find_listint_loop - entry
 * @head: head
 * Return: mm
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *aux;
	int i = 0,j = 0;

	if (head == NULL)
		return (NULL);
	if (head->next == head)
		return (head);
	ptr = head->next;
	aux = head;
	while (ptr != NULL)
	{
		while (aux != ptr)
		{
			i++;
			aux = aux->next;
		}
		aux = head;
		ptr = ptr->next;
		while (aux != ptr)
		{
			j++;
			aux = aux->next;
		}
		if (i > j)
			return (aux);
	}
	return (NULL);
}
