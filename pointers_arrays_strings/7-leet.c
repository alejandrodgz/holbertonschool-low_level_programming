#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - from lowercase to uppercase
 * @s: string
 * Return: s leet
 */

char *leet(char *s)
{
	int let[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int tr[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (let[j] == s[i])
			{
				s[i] = tr[j];
			}
		}
	}
	return (s);
}
