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
	int i, j;
	int *p = NULL;

	if (min > max)
		return (NULL);
	j = (max - min);
	p = malloc(sizeof(int) * j + 4);
	if (!p)
		return (NULL);
	for (i = min; i < j; i++)
	{
		p[i] = i;
	}
	return (p);
}
