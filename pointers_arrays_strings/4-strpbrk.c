#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - fills memory with a constant byte
 *
 * @s pointed area to fill
 * @accept: what to fill
 *
 * Return: pointer to the memory area
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
				break;
			}
			else
			{
				j++;
			}
		}
		j = 0;
	}
	return (0);
}
