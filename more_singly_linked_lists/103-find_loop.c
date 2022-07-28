#include "lists.h"

/**
 * find_listint_loop - entry
 * @head: head
 * Return: mm
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *aux = head;

	if (aux == NULL)
		return (NULL);
	if (aux->next == aux)
		return (aux);
	ptr = aux->next;
	while (aux != NULL || ptr != NULL)
	{
		if (aux->next == NULL || ptr->next == NULL)
			return (NULL);
		if (aux->next < ptr->next)
		{
			ptr = ptr->next;
			return (ptr);
		}
		aux = aux->next;
		ptr = ptr->next;
	}
	return (NULL);
}
