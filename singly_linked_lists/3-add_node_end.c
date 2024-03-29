#include "lists.h"

/**
 * add_node_end - return number of elements
 *
 * @head: pointer to head of a list
 * @str: string length
 * Return: number of nodes
 *
0 */


list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *ptr, *pot;

	if (strdup(str) == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(list_t));
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		pot = *head;
		while (pot->next != NULL)
			pot = pot->next;
		pot->next = ptr;
	}
	return (ptr);
}
