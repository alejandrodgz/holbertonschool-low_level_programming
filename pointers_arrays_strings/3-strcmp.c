#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - concatenates n bytes from src to dest
 * @s2: destination string
 * @s1: number of elements to print
 * Return: s[i] - s[i]
 */

int _strcmp(char *s1, char *s2)
{

	int i;
	int j = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else if (s1[i] != s2[i])
		{
			j = s1[i] - s2[i];
			break;
		}
	}
	return (j);
}
