#include "lists.h"
/**
 * get_nodeint_at_index - eturns the number of elements in a
 * linked listint_t list
 * @head: head of the list
 * @index: value
 * Return: the number nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0, j = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;
	if (ptr == NULL)
		return (NULL);
	while (head != NULL)
	{
		j++;
		head = head->next;
	}
	if (index > j)
	{
		printf("(nil)");
		return (NULL);
	}
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
