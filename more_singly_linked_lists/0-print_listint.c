#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: the head of the list
 * Return: number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t i = 0;

	if (h == NULL)
		return (0);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (0);
	ptr = h;
	while (ptr->next != NULL)
	{
		i++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (i);
}
