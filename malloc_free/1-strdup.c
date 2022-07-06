#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Write a function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @str: size of array
 *
 *
 * Return: if size 0 then NULL
 */

char *_strdup(char *str)
{
	int i;
	char *t = NULL;
	int len = strlen(str);

	if (len == 0)
	{
		return (NULL);
	}
	t = malloc(len + 1);
	if (!t)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		t[i] = str[i];
	}
	return (t);
}
