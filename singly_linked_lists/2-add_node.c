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
	unsigned int i = 0;
	list_t *ptr;

	if(strdup(str) == NULL)
		return (NULL);
	if(str == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if(ptr == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
