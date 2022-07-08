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
	unsigned int i, j = 0, len1;
        char *t;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	t = malloc(sizeof(char)*(len1 + n));
	if (!t)
		return (NULL);
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
