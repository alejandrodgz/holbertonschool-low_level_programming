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

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *p = NULL;

	if(nmemb == 0)
		return (NULL);
	if(size == 0)
		return (NULL);
	j = (size * nmemb);
  	p = malloc(j);
	if (!p)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
	{
		p[i] = 0;
	}
	return (p);
}
