#include "lists.h"

/**
 * listint_len - eturns the number of elements in a linked listint_t list
 * @h: head of the list
 *
 * Return: the number nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t i = 0;

	if (h == NULL)
		return (0);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}