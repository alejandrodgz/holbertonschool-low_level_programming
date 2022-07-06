#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of array
 * @c: array's element
 *
 * Return: if size 0 then NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;

	if (size == 0)
	{
		return (NULL);
	}
	t = malloc(sizeof(c) * size);
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
