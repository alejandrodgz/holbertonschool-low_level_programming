#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * alloc_grid - concatenates n bytes from src to dest
 * @width: s1
 * @height: s2
 *
 * Return: return1
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **t;

	if (width <= 0 || height <= 0)
		return (NULL);
	t = malloc(sizeof(int*) * height);
	if (t == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		t[k] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			t[i][j] = 0;
		}
	}
	return (t);
}
