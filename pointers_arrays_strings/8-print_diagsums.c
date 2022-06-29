#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - fills memory with a constant byte
 *
 * @a: ointed area to fill
 * @size: size
 * Return: pointer to the memory area
 */

void print_diagsums(int *a, int size)
{
	int i, k, j, l, size2;

	i = 0;
	l = 0;
	k = 0;
	size2 = size * size;
	j = size2 - 1;
	while (i < size2)
	{
		k = k + a[i];
		i = i + (size + 1);
	}
	printf("%d, ", k);
	while (j >= size)
	{
		j = j - (size - 1);
		l = l + a[j];
	}
	printf("%d\n", l);
}
