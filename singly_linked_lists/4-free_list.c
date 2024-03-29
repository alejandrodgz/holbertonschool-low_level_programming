#include "lists.h"

/**
 * free_list - return number of elements
 *
 * @head: pointer to head of a list
 *
 */


void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
