#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - fills memory with a constant byte
 *
 * @s: pointed area to fill
 * @accept: what to fill
 *
 * Return: pointer to the memory area
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				return (j + 1);
			}
		}
	}
	return (0);
}
