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
	unsigned int i, j, a;

	a = 0;
	for (i = 0; s[i] != '\0' && s[i] != 32; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				a = a + 1;
			}
		}
	}
	if (a != 0)
	{
		return (a + 1);
	}
	else
	{
		return (0);
	}
}
