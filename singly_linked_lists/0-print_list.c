#include "lists.h"

/**
 * print_list - print the nodes
 *
 * @h: pointer to head of a list
 *
 * Return: number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		a += 1;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
	}
	return (a);
}
