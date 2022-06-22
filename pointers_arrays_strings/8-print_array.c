#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - every other character
 * @a: pointer
 * @n: number of elements to print
 * Return: length of string
 */

void print_array(int *a, int n)
{
	int m;


	for (m = 0; m < n; m++)
	{
		if (m == (n - 1))
		{
			printf("%i", a[m]);
			break;
		}
		else
		{
			printf("%i, ", a[m]);
		}
	}
	printf("\n");
}
