#include "lists.h"

/**
 * list_len - return number of elements
 *
 * @h: pointer to head of a list
 *
 * Return: number of nodes
 *
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		a += 1;
		ptr = ptr->next;
	}
	return (a);
}
