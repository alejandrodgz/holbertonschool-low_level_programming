#include "lists.h"
/**
 * insert_nodeint_at_index - eturns the number of elements in a
 * linked listint_t list
 * @head: head of the list
 * @idx: node number
 * @n: value
 * Return: the number nodes
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *pan, *pot, *pil;
	unsigned int i = 1, j = 0;

	pot = malloc(sizeof(listint_t));
	pot->n = n;
	pil = *head;
	while (pil != NULL)
	{
		j++;
		pil = pil->next;
	}
	if (idx > j)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		pot->next = (*head);
		*head = pot;
		return (pot);
	}
	else
	{
		ptr = (*head)->next;
		pan = *head;
		while (i < idx)
		{
			ptr = ptr->next;
			pan = pan->next;
			i++;
		}
		pan->next = pot;
		pot->next = ptr;
		return (pot);
	}
}
