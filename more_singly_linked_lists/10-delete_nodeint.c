#include "lists.h"
/**
 * delete_nodeint_at_index - eturns the number of elements in a
 * linked listint_t list
 * @head: head of the list
 * @index: node number
 * Return: the number nodes
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *pan, *pil;
	unsigned int i = 1, j = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	pil = *head;
	while (pil != NULL)
	{
		j++;
		pil = pil->next;
	}
	if (index > j)
	{
		return (-1);
	}
	if (index == 0)
	{
		pan = (*head)->next;
		free(*head);
		*head = pan;
		return (1);
	}

	pan = *head;
	ptr = (*head)->next;
	while (i < index)
	{
		pan = pan->next;
		ptr = ptr->next;
		i++;
	}
	pan->next = ptr->next;
	free(ptr);
	return (1);
}
