#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - concatenates n bytes from src to dest
 * @min: s1
 * @max: s2
 * Return: return1
 */

int *array_range(int min, int max)
{
	int i;
	int *p = NULL;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * max + 4);
	if (!p)
		return (NULL);
	for (i = min; i < (max); i++)
	{
		p[i] = i;
	}
	return (p);
}
