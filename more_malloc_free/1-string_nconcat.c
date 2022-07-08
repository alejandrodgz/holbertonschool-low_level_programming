#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates n bytes from src to dest
 * @s1: s1
 * @s2: s2
 * @n: n
 * Return: return1
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, n2;
	char *t;

	if(s1 == NULL)
		s1 = "";
	if(s2 == NULL)
		s2 = "";
	n2 = sizeof(s2);
	if (n > n2)
		n = n2;
	t = malloc(sizeof(char) * (strlen(s1) + n));
	for (i = 0; s1[i] != '\0'; i++)
	{
		t[i] = s1[i];
	}
	while (j < n && s2[j] != '\0')
	{
		t[i + j] = s2[j];
		j++;
	}
	t[i + j] = '\0';
	return (t);
}
