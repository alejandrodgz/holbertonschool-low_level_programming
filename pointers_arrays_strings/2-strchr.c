#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - fills memory with a constant byte
 *
 * @s: what to fill
 * @c: number of bytes to fill
 *
 * Return: pointer to the memory area
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
