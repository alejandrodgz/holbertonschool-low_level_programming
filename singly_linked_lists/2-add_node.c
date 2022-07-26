#include "lists.h"

/**
 * add_node - return number of elements
 *
 * @head: pointer to head of a list
 * @str: string length
 * Return: number of nodes
 *
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	unsigned int i = 0;
	while(str[i] != '\0')
		i++;
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = *head;
	*head = ptr;
	return(*head);
}
