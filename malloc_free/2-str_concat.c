#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * str_concat - concatenates n bytes from src to dest
 * @s1: s1
 * @s2: s2
 *
 * Return: return1
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1, len2;
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	t = malloc(sizeof(t) * (len1 + len2 + 1));
	if (!t)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		t[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		t[i + j] = s2[j];
	}
	t[i + j] = '\0';
	return (t);
}
